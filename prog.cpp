#include <iostream>

void showMenu(void)
{
    std::cout << "Contact Management System" << std::endl;
    std::cout << "Options:" << std::endl;
    std::cout << "1. Show Contacts." << std::endl;
    std::cout << "2. Add New Contact." << std::endl;
    std::cout << "3. Edit Contact." << std::endl;
    std::cout << "4. Get Contact." << std::endl;
    std::cout << "5. Remove Contact." << std::endl;
    std::cout << "6. Delete Contacts." << std::endl;
}

void getData(std::string& name, std::string& phone, std::string& addr, bool& gender, int& age)
{
    std::cout << "Name:     ";
    std::cin >> name;
    std::cout << "Phone:    ";
    std::cin >> phone;
    std::cout << "Address:  ";
    std::cin >> addr;
    std::cout << "Age:      ";
    std::cin >> age;
    std::cout << "Gender:   ";
    std::cin >> gender;
}