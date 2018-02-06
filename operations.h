/**
*   @author Nikita Somenkov
*   @email somenkov.nikita@icloud.com
*   @date   28 Jan 2018
*/

#pragma once

#include <stddef.h>

#include "contact.h"

enum del_contact_errors {
    DELETED = 0,
    NO_FOUND = -1
};

void add_contact(struct contact *contacts, size_t *size, const struct contact *contact);

int del_contact_by_index(struct contact *contacts, size_t *size,
                         size_t index);

size_t search_contact_by_criteria(const struct contact *contacts, size_t *size,
                                  const struct contact *criteria);