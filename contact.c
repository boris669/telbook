/**
*   @author Nikita Somenkov
*   @email somenkov.nikita@icloud.com
*   @date   27 Jan 2018
*/

#include <string.h>
#include <stdio.h>

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

int is_empty(const char *info) {
    return strcmp(info, "-") == 0;
}

void print_contact(const struct contact *contact) {
    char *name_format = "Name: %s\t%s\t%s\n";
    char *tel_format = "Tel:\t%s\n";
    char *email_format = "Email:\t%s\n";
    char *birthday_format = "Birthday:\t%s\n";

    printf(name_format,
           contact->first_name,
           contact->last_name,
           contact->father_name);

    if (!is_empty(contact->tel)) {
        printf(tel_format, contact->tel);
    }
    if (!is_empty(contact->email)) {
        printf(email_format, contact->email);
    }
    if (!is_empty(contact->birthday)) {
        printf(birthday_format, contact->birthday);
    }
}

