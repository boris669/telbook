/**
*   @author Nikita Somenkov
*   @email somenkov.nikita@icloud.com
*   @date   20 Jan 2018
*/
#include <stdio.h>
#include <locale.h>

int main(int argc, char *argv[])
{
    setlocale(LC_ALL, "Rus");
    if (argc != 2)
    {
        printf("требуется файл");
    }// читать файл, проверить что он успешно открылся, проверить что на вход программы есть агрмументы
    // запустить процесс работы с пользователем
}
