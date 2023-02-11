#ifndef INTERNAL_STORAGE_H
#define INTERNAL_STORAGE_H
#include <string>
#include "File_manager.h"

class Internal_storage: public File_manager
{
public:
    Internal_storage(const std::string &, double=0.0);
    virtual ~Internal_storage() {}


    virtual void Write() const override;
    virtual char Read() const override;
    virtual char filelist() const override;


};

#endif // INTERNAL_STORAGE_H
