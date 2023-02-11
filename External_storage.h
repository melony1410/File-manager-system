#ifndef EXTERNAL_STORAGE_H
#define EXTERNAL_STORAGE_H
#include <string>
#include "File_manager.h"


class External_storage: public File_manager
{
public:
    External_storage(const std::string &, double=0.0);
    virtual ~External_storage() {}

    virtual void Insert() const override;
    virtual void Eject() const override;
    virtual void Write() const override;
    virtual char Read() const override;
    virtual char filelist() const override;


};

{
public:
    External_storage();
};

#endif // EXTERNAL_STORAGE_H
