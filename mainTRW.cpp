#include "include/Parse.h"

int main(int argc, char *argv[])
{
    if(ParserVolvo::FromTxtToBin(argv[1], argv[2]))   //Первый аргумент - путь к файлу.txt, Второй - путь к файлу.bin
        exit(1);

    return 0;
}