#include <iostream>
#include <string>

// Prompts the user to input their name and then displays a personalized greeting message.
int main() {
    std::string name;
    std::cout << "Enter your name: ";
    std::cin >> name;
    std::cout << "Hello, world from " << name << "!" << std::endl;
    return 0;
}
