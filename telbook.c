/**
*   @author Nikita Somenkov
*   @email somenkov.nikita@icloud.com
*   @date   20 Jan 2018
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "parser.h"
#include "operations.h"

typedef void (*command_proccessor)(struct contact *book, size_t *size);

void print_proccessor(struct contact *book, size_t *size) {
    if (size == NULL || book == NULL) return;
    for (size_t i = 0; i < *size; i++) {
        print_contact(book + i);
    }
}

void del_proccessor(struct contact *book, size_t *size) {
    int index = 0;
    printf("Who (index): ");
    scanf("%d", &index);
    if (del_contact_by_index(book, size, index) == NO_FOUND) {
        printf("Contact no found\n");
    }
}

void worker(struct contact *book, size_t *size, const char *command)
{
    const char *commands[] = {"print", "del"};
    const command_proccessor command_proccessor[] = { print_proccessor, del_proccessor };

    for (size_t i = 0; i < sizeof(commands) / sizeof(*commands); i++) {

        if (strcmp(commands[i], command) == 0) {
            command_proccessor[i](book, size);
            return;
        }
    }

    printf("command '%s' not support\n", command);
}

int run_interactive(struct contact *book, size_t size) {
    char command[128];

    while (1) {
        printf(">>> ");
        scanf("%s", command);
        if (strcmp(command, "exit") == 0) {
            break;
        }

        worker(book, &size, command);
    }

    return EXIT_SUCCESS;
}

int main(int argc, char *argv[])
{
    if (argc != 2) {
        printf("требуется файл");
        return 2;
    }

    FILE *file = fopen(argv[1], "r");
    if (file == NULL) {
        printf("File not open");
        return 1;
    }

    struct contact book[100];
    size_t size = 0;
    read_contacts(file, book, &size);

    run_interactive(book, size);

    return 0;
}

