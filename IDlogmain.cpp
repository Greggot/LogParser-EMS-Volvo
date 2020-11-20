#include "include/Parse.h"

//**************************************************************************************************
// Procedure main()
//**************************************************************************************************

//   Вывод файлов, содержащих данные обмена сообщениями между двумя ID   //

int main(int argc, char *argv[])
{  
    LogParser Log (argv[1]);    // Создание объекта, состоящего из dataString и списка ID

    Log.outputTableIntoFile(argv[2], argv[3]);  // Вывести таблицу ID-DATA-TIME в виде текстового файла 
    Log.oututDataIntoFile(argv[2], argv[3]);    // Вывести текстовый файл, формата, подходящего для парсинга

    return 0;
}