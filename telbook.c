/**
*   @author Nikita Somenkov
*   @email somenkov.nikita@icloud.com
*   @date   20 Jan 2018
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "parser.h"

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

    return 0;
}

