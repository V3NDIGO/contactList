#include <iostream>
#include <vector>
#include <string>

struct Contact {
    std::string name;
    std::string phone;
    std::string email;
};

// Function to add a contact to the contacts vector
void addContact(std::vector<Contact>& contacts) {
    Contact newContact;
    std::cout << "Enter name: ";
    std::cin.ignore();
    std::getline(std::cin, newContact.name); 
    std::cout << "Enter phone number: ";
    std::getline(std::cin, newContact.phone); 
    std::cout << "Enter email: ";
    std::getline(std::cin, newContact.email); 
    contacts.push_back(newContact); 
    std::cout << "Contact added successfully!" << std::endl;
}

// Function to view all contacts in the contacts vector
void viewContacts(const std::vector<Contact>& contacts) {
    if (contacts.empty()) { 
        std::cout << "No contacts found." << std::endl;
    } else {
        std::cout << "Contacts:" << std::endl;
        for (const auto& contact : contacts) {
            std::cout << "Name: " << contact.name << std::endl;
            std::cout << "Phone: " << contact.phone << std::endl;
            std::cout << "Email: " << contact.email << std::endl;
            std::cout << "---------------------" << std::endl;
        }
    }
}

int main() {
    std::vector<Contact> contacts; // Vector to store contacts

    int choice;
    while (true) {
        std::cout << "Contact Book" << std::endl;
        std::cout << "1. Add Contact" << std::endl;
        std::cout << "2. View Contacts" << std::endl;
        std::cout << "3. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice; 

        switch (choice) {
            case 1:
                addContact(contacts); // Call addContact() function to add a contact
                break;
            case 2:
                viewContacts(contacts); // Call viewContacts() function to view all contacts
                break;
            case 3:
                std::cout << "Exiting..." << std::endl;
                return 0;
            default:
                std::cout << "Invalid choice. Try again." << std::endl;
        }
    }

    return 0;
}
