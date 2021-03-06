/**
*   @author Nikita Somenkov
*   @email somenkov.nikita@icloud.com
*   @date   27 Jan 2018
*/

#pragma once

#define NAME_LEN 128
#define TEL_LEN 12
#define DATA_LEN 11

struct contact {
    char first_name[NAME_LEN];
    char last_name[NAME_LEN];
    char father_name[NAME_LEN];
    char tel[TEL_LEN];
    char birthday[DATA_LEN];
    char email[NAME_LEN];
};

void init_contact(struct contact *contact);

void print_contact(const struct contact *contact);