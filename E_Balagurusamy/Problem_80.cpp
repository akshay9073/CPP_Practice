#include <iostream>

class Sample {
private:
    int value;

public:
    Sample(int val) : value(val) {}

    void display() const {
        std::cout << "Value: " << value << "\n";
    }

    // Declaring a friend function to access private members
    friend void swapPrivateData(Sample* obj1, Sample* obj2);
};

// Function that accepts object pointers and swaps their private data
void swapPrivateData(Sample* obj1, Sample* obj2) {
    // Obtain pointers to the private data members
    int* ptr1 = &(obj1->value);
    int* ptr2 = &(obj2->value);

    // Swap values using pointer dereferencing
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main() {
    Sample obj1(100);
    Sample obj2(200);

    std::cout << "Before Swap:\n";
    std::cout << "obj1: "; obj1.display();
    std::cout << "obj2: "; obj2.display();

    // Pass object addresses to the function
    swapPrivateData(&obj1, &obj2);

    std::cout << "\nAfter Swap:\n";
    std::cout << "obj1: "; obj1.display();
    std::cout << "obj2: "; obj2.display();

    return 0;
}
