/**
*   @author Nikita Somenkov
*   @email somenkov.nikita@icloud.com
*   @date   28 Jan 2018
*/

#include <stdio.h>
#include <string.h>
#include "operations.h"

void add_contact(struct contact *contacts, size_t *size, const struct contact *contact)
{
    void *for_check[] = {
            (void *)contacts,
            (void *)contact,
            (void *)size
    };

    for (size_t i = 0; i < sizeof(for_check) / sizeof(*for_check); i++)
        if (for_check[i] == NULL) return;

    contacts[*size] = *contact;
    (*size)++;
}

int del_contact_by_index(struct contact *contacts, size_t *size,
                         size_t index)
{
    if (size == NULL || *size == 0 || contacts == NULL)
        return NO_FOUND;

    if (index >= *size) return NO_FOUND;

    for (size_t i = index; i < *size - 1; i++)
        contacts[i] = contacts[i + 1];

    (*size)--;
    return DELETED;
}

int check_criteria(const char *cr1, const char *orig)
{
    return strcmp(cr1, "") != 0 && strcmp(cr1, orig) == 0;
}

size_t search_contact_by_criteria(const struct contact *contacts, size_t *size,
                                  const struct contact *criteria)
{
    void *for_check[] = {
            (void *)contacts,
            (void *)size
    };

    for (size_t i = 0; i < sizeof(for_check) / sizeof(*for_check); i++)
        if (for_check[i] == NULL) return NO_FOUND;


    for (size_t i = 0; i < *size; i++) {
        if (check_criteria(criteria->last_name, contacts[i].last_name) ||
            check_criteria(criteria->first_name, contacts[i].first_name) ||
            check_criteria(criteria->father_name, contacts[i].father_name) ||
            check_criteria(criteria->tel, contacts[i].tel) ||
            check_criteria(criteria->email, contacts[i].email) ||
            check_criteria(criteria->birthday, contacts[i].birthday)) {
            return i;
        }
    }

    return NO_FOUND;
}

