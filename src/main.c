#include <stdio.h>

int main(void) {
    // string literal shouldn't be modified
    const char *options[6] = { 
        "Exit", 
        "Add a new Contact", 
        "List all Contacts", 
        "Search for contact", 
        "Edit a contact", 
        "Delete a Contact"
    };
   
    printf("Contact Management System");
    printf("\n\n");
    printf("        MAIN MENU        ");
    printf("\n\n");

    return 0;
}