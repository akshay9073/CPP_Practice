#include<iostream> 
#include<chrono>
#include<mutex>
#include<condition_variable> 
#include<queue>
#include<thread>

using namespace std;
// Shared buffer and its maximum capacity
std::queue<int> buffer;
const size_t MAX_CAPACITY = 5;

// Synchronization tools
std::mutex mtx;
std::condition_variable not_full;
std::condition_variable not_empty;

// Producer function
void producer(int id, int items_to_produce) {
    for (int i = 1; i <= items_to_produce; ++i) {
        int item = id * 10 + i;

        {
            // Lock the mutex
            std::unique_lock<mutex> lock(mtx);

            // Wait if the buffer is full
            not_full.wait(lock, [] { return buffer.size() < MAX_CAPACITY; });

            // Produce item
            buffer.push(item);
            std::cout << "[Producer " << id << "] Produced: " << item 
                      << " (Buffer size: " << buffer.size() << ")\n";
        } // Lock is released automatically here

        // Wake up a waiting consumer
        not_empty.notify_one();

        std::this_thread::sleep_for(std::chrono::milliseconds(100)); // Simulate work
    }
}

// Consumer function
void consumer(int id, int items_to_consume) {
    for (int i = 0; i < items_to_consume; ++i) {
        int item;

        {
            // Lock the mutex
            std::unique_lock<mutex> lock(mtx);

            // Wait if the buffer is empty
            not_empty.wait(lock, [] { return !buffer.empty(); });

            // Consume item
            item = buffer.front();
            buffer.pop();
            std::cout << "[Consumer " << id << "] Consumed: " << item 
                      << " (Buffer size: " << buffer.size() << ")\n";
        } // Lock is released automatically here

        // Wake up a waiting producer
        not_full.notify_one();

        std::this_thread::sleep_for(std::chrono::milliseconds(150)); // Simulate work
    }
}

int main() {
    int total_items = 5;

    // Start one producer thread and one consumer thread
    std::thread p(producer, 1, total_items);
    std::thread c(consumer, 1, total_items);

    // Wait for both threads to finish
    p.join();
    c.join();

    std::cout << "Done! All items produced and consumed.\n";
    return 0;
}
