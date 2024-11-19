#include <iostream>
#include <string>

// This program asks the user for their name and greets them with a personalized
// message.
int
main()
{
  std::string name;
  std::cout << "Enter your name: ";
  std::cin >> name;
  std::cout << "Hello, world from " << name << "!" << std::endl;
  return 0;
}
