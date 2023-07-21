#ifndef CONTACTSLIST_H
#define CONTACTSLIST_H

#include <vector>

#include "Contacts.hpp"

#pragma once

class ContactsList
{
private:
    std::vector<Contacts> List;
    int ContactsNumber;
public:
    ContactsList();
    void showContacts(void);
    void addNewContact(void);
    void editContact(int id);
    void displayContact(int id);
    void removeContact(int id);
    void clearList(void);
};

#endif