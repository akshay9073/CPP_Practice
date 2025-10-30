#include <iostream>
#include <string> // Required for using std::string

// Define a class named 'Car'
class Car {
public: // Public members can be accessed from outside the class
    // Attributes (data members)
    std::string brand;
    std::string model;
    int year;

    // Method (member function) to display car details
    void displayCarDetails() {
        std::cout << "Brand: " << brand << std::endl;
        std::cout << "Model: " << model << std::endl;
        std::cout << "Year: " << year << std::endl;
    }
}; // Don't forget the semicolon after the class definition

int main() {
    // Create objects of the 'Car' class
    Car car1; // Declares an object named 'car1'
    Car car2; // Declares another object named 'car2'

    // Set attributes for car1
    car1.brand = "Toyota";
    car1.model = "Camry";
    car1.year = 2022;

    // Set attributes for car2
    car2.brand = "Honda";
    car2.model = "Civic";
    car2.year = 2023;

    // Call the displayCarDetails method for each object
    std::cout << "Details of Car 1:" << std::endl;
    car1.displayCarDetails();

    std::cout << "\nDetails of Car 2:" << std::endl;
    car2.displayCarDetails();

    return 0;
}
