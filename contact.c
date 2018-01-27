/**
*   @author Nikita Somenkov
*   @email somenkov.nikita@icloud.com
*   @date   27 Jan 2018
*/

#include <string.h>

#include "contact.h"


void init_contact(struct contact *contact)
{
    strcpy(contact->last_name, "");
    strcpy(contact->first_name, "");
    strcpy(contact->father_name, "");
    strcpy(contact->tel, "");
    strcpy(contact->birthday, "");
    strcpy(contact->email, "");
}

void print_contact(const struct contact *contact) {

}