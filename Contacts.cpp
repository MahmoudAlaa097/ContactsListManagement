#include "Contacts.hpp"

int nextID = 1;

Contacts::Contacts()
{
    // Intialize contact's info
    std::cout << "Name: ";
    std::cin >> name;
    std::cout << "Phone: ";
    std::cin >> phone;
    std::cout << "Address: ";
    std::cin >> addr;
    std::cout << "Gender: ";
    std::cin >> gender;
    std::cout << "Age: ";
    std::cin >> age;

    id = nextID++;
}

void Contacts::showContact(void)
{
    // Display contact's info
    std::cout << "ID:       " << id << std::endl;
    std::cout << "Name:     " << name << std::endl;
    std::cout << "Phone:    " << phone << std::endl;
    std::cout << "Address:  " << addr << std::endl;
    std::cout << "Gender:   " << gender << std::endl;
    std::cout << "Age:      " << age << std::endl;
}

void Contacts::editContact(std::string cp_name, std::string cp_phone, std::string cp_addr, bool cp_gender, int cp_age)
{
    name = cp_name;
    phone = cp_phone;
    addr = cp_addr;
    gender = cp_gender;
    age = cp_age;
}