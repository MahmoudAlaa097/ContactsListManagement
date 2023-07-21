#include <iostream>
#include <vector>
#include <string>

#include "Contacts.hpp"
#include "ContactsList.hpp"
#include "prog.hpp"

int main()
{
    int option,id;
    ContactsList L;

    while(1)
    {
        // Display main menu
        showMenu();

        // Get user choice
        std::cin >> option;

        // Switch on user choice
        switch (option)
        {
        case 1:
            // Show contacts
            L.showContacts();
            break;
    
        case 2:
            // Add a new contact
            L.addNewContact();
            break;

        case 3:
            // Edit an existing contact
            // Get required contact ID
            std::cout << "ID: ";
            std::cin >> id;
            
            // Edit required contact
            L.editContact(id);
            break;

        case 4:
            // Get an existing contact
            // Get required contact ID
            std::cout << "ID: ";
            std::cin >> id;

            // Display required contact info
            L.displayContact(id);
            break;

        case 5:
            // Remove an existing contact
            // Get required contact ID
            std::cout << "ID: ";
            std::cin >> id;

            L.removeContact(id);
            break;

        case 6:
            // Clear List
            L.clearList();
            break;

        default:
            // Invalid Option 
            std::cout << "Invalid Option." << std::endl;
            break;
        }
    }

    return 0;
}