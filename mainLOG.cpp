//**************************************************************************************************
// Includes
//**************************************************************************************************

#include "include/Parse.h"

//**************************************************************************************************
// Procedure main() 
//**************************************************************************************************

//   Вывести в ./temp/ таблицу и список ID    //
int main(int argc, char *argv[])
{  
    LogParser Log (argv[1]);

    Log.outputIDIntoFile();
    Log.outputTableIntoFile();

    return 0;
}