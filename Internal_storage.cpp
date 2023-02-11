#include <iostream>
#include <fstream>
#include <vector>
#include "Internal_storage.h"
using namespace std;

Internal_storage::Internal_storage(const string &name, double filled)
                 : File_manager(name, filled)

{

}


//char Internal_storage::Read() const
//{
//    std::ifstream file("myfile", std::ios::binary | std::ios::ate);
//    std::streamsize size = file.tellg();
//    file.seekg(0, std::ios::beg);

//    std::vector<char> buffer(size);
//    if (file.read(buffer.data(), size))
//    {
//        /* worked! */
//    }
//    return ;
//}
char Internal_storage::Read() const
{
streampos size;
char * memblock;

ifstream file ("example.bin", ios::in|ios::binary|ios::ate);
if (file.is_open())
{
size = file.tellg();
memblock = new char [size];
file.seekg (0, ios::beg);
file.read (memblock, size);
file.close();
cout << "the entire file content is in memory";
delete[] memblock;
}
else cout << "Unable to open file";
return 0;

}
void write(std::ostream& os) {
    os << "abc";
}

template <typename char_type>
struct ostreambuf : public std::basic_streambuf<char_type, std::char_traits<char_type> > {
    ostreambuf(char_type* buffer, std::streamsize bufferLength) {
        this->setp(buffer, buffer + bufferLength);
    }
};

