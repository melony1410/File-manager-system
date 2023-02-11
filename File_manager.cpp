#include <iostream>
#include "File_manager.h"
using namespace std;

File_manager::File_manager(const string &name, double filled)
            :filename(name), storagespace(filled)
{

}

void File_manager::setfilename(const string &name)
{
    filename=name;
}

string File_manager::getfilename() const
{
return filename;
}

void File_manager::setstoragespace(double filled)
{
  if (filled<=1000)
    storagespace=filled;
  else
    throw invalid_argument ("storage space must be free");
}

double File_manager::getstoragespace() const
{
return storagespace;
}

