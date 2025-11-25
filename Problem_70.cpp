#include <iostream>  
namespace Room1 {
    // Function greet inside namespace Room1
    void greet() {
        std::cout << "Hello from Room 1!" << std::endl;
    }
}

namespace Room2 {
    // Function greet inside namespace Room2
    void greet() {
        std::cout << "Hello from Room 2!" << std::endl;
    }
}

int main() {
    // Use the scope resolution operator (::) to access greet() function inside namespace Room1
    Room1::greet();  
    Room2::greet(); 
    
    return 0;  
}
