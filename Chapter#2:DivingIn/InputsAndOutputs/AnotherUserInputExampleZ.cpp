

#include <iostream>

int main() {

    int age1;
    std::string name;

    std::cout << "Please enter your name and age :" << std::endl;

//    std::cin >> name;
  //  std::cin >> age1;

    std::cin >> name >> age1;

    std::cout << "Hello " << name << " you are " << age1 << " years old!" << std::endl;

    return 0;

}