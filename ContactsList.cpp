
#include "ContactsList.hpp"
#include "Contacts.hpp"
#include "prog.hpp"

ContactsList::ContactsList()
{
    // Intialize contacts number to 0
    ContactsNumber = 0;
}

void ContactsList::showContacts(void)
{
    // Traverse the lsit
    for(auto iterator : List)
    {
        // Show contact info
        iterator.showContact();
    }
}

void ContactsList::addNewContact(void)
{
    // Declare a new object
    Contacts newContact;

    // Attach it to the list
    List.push_back(newContact);

    // Increase contacts number
    ContactsNumber++;
}

void ContactsList::editContact(int id)
{
    std::string name,phone,addr;
    bool gender;
    int age;

    getData(name, phone, addr, gender, age);

    List.at(id-1).editContact(name, phone, addr, gender, age);
}

void ContactsList::displayContact(int id)
{
    // Show required contact info
    List.at(id-1).showContact();
}

void ContactsList::removeContact(int id)
{
    // Remove required contact
    auto it = List.begin();
    it += id-1;

    List.erase(it);

    // Decrement list length
    ContactsNumber--;
}

void ContactsList::clearList(void)
{
    // Clear the whole contact List
    List.clear();

    // Set list length to 0
    ContactsNumber = 0; 
}