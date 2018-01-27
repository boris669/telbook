/**
*   @author Nikita Somenkov
*   @email somenkov.nikita@icloud.com
*   @date   27 Jan 2018
*/

#include <stdio.h>
#include "parser.h"

int parse_contact(const char *line, struct contact *contact)
{
    const char *format = "%s %s %s %s %s %s";

    init_contact(contact);
    int success_number = sscanf(line, format,
           &contact->last_name,
           &contact->first_name,
           &contact->father_name,
           &contact->tel,
           &contact->birthday,
           &contact->email);

    if (success_number != 6) {
        return PARSE_ERROR;
    } else {
        return PARSE_OK;
    }
}

int read_contacts(FILE *file, struct contact *contacts, size_t *size)
{
//    if (contacts == NULL)
//        return ...;
//    if (file == NULL) {
//        return ...;
//    }

    char *line = NULL;
    size_t linecap = 0;
    *size = 0;
    while (getline(&line, &linecap, file) > 0) {
        parse_contact(line, contacts + *size);
        (*size)++;
    }
}

