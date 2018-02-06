/**
*   @author Nikita Somenkov
*   @email somenkov.nikita@icloud.com
*   @date   27 Jan 2018
*/

#pragma once

#include "contact.h"

enum parse_errors {
    PARSE_OK = 0,
    PARSE_ERROR = -1,
};

int parse_contact(const char *line, struct contact *contact);

int read_contacts(FILE *file, struct contact *contacts, size_t *size);

