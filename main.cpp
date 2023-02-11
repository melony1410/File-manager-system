#include <iostream>
#include <vector>
#include "Internal_storage.h"
#include "External_storage.h"
#include "File_manager.h"
using namespace std;

void virtualviaPointer(const File_manager * const);

int main()
{
    External_storage Flash ("M_flash", 700);
    External_storage Memory ("Memory_1", 500);
    Internal_storage Harddisk ("HDD1",1000);
    Internal_storage RAM ("DDR",200);

    vector <File_manager *> Hardwares (4);

    Hardwares[0]=&Flash;
    Hardwares[1]=&Memory;
    Hardwares[2]=&Harddisk;
    Hardwares[3]=&RAM;
for (const File_manager *HardwaresPtr : Hardwares)
    virtualviaPointer(HardwaresPtr);

//int HardwaresPtr=4;

//swich (HardwaresPtr)

//case 1
//  baseClassPtr->Insert();
//  baseClassPtr->Eject();
//  baseClassPtr->Read();
//  baseClassPtr->write();
//case 2
//  baseClassPtr->Insert();
//  baseClassPtr->Eject();
//  baseClassPtr->Read();
//  baseClassPtr->write();
//case 3
//  baseClassPtr->Read();
//  baseClassPtr->write();
//case 4
//  baseClassPtr->Read();
//  baseClassPtr->write();

void virtualviaPointer(const File_manager * const baseClassPtr)

{
  baseClassPtr->Read();
  baseClassPtr->write();
  baseClassPtr->Insert();
  baseClassPtr->Eject();


}



    cout << "show" << endl;
    return 0;
}
