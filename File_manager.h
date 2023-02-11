#ifndef FILE_MANAGER_H
#define FILE_MANAGER_H
#include <string>


class File_manager
{
public:
    File_manager(const std::string &, double=0.0);
    virtual ~File_manager() {}

    void setfilename(const std::string &);
    std::string getfilename() const;

    void setstoragespace(double);
    double getstoragespace() const;

    virtual void Insert() const=0;
    virtual void Eject() const=0;
    virtual void Write() const=0;
    virtual char Read() const=0;
    virtual char filelist() const=0;
private:
    std::string filename;
    double storagespace;
};

#endif // FILE_MANAGER_H
