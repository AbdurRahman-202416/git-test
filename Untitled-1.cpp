#include <iostream>
#include <string>

int main() {
    std::string name;
    int age;

    // Ask for the user's name
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    // Ask for the user's age
    std::cout << "Enter your age: ";
    std::cin >> age;

    // Output a greeting
    std::cout << "Hello, " << name << "! You are " << age << " years old." << std::endl;

    return 0;
}
