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
    if (file != 0) {
        printf("File not open");
        return 1;
    }
}

void add_strings(float *str[], size_t count_x)
{
    for (size_t i = 0; i < count_x; i++)
    {
        str = str[count_x + i];
        for (int j = 0; j < 1024; ++j)
        {
            const size_t index = count_x + i;
            str[index] + j;
            if (str[index] + j != 0)
                continue;
        }

    }
}
