#include <iostream>
#include <fstream>
#include <vector>
#include "External_storage.h"
#include <Cfgmgr32.h>

External_storage::External_storage()
{

}

//char External_storage::Read() const
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
char External_storage::Read() const
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

//
typedef CONFIGRET(WINAPI* HPED)(HWND hWnd, PCWSTR DeviceInstanceId, DWORD dwFlags);
HPED HotPlugEjectDevice = NULL;
HMODULE hDLL = LoadLibrary(TEXT("HotPlug.dll"));
if (hDLL != NULL)
{
    HotPlugEjectDevice = (HPED)GetProcAddress(hDLL, "HotPlugEjectDevice");
    if (HotPlugEjectDevice)
    {
        CONFIGRET cr = HotPlugEjectDevice(NULL, TEXT("USB\\VID_1058&PID_1001\\574341505734363536363133"), 0);
        // Test cr...
    }
}
