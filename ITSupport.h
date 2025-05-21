#ifndef ITSUPPORT_H
#define ITSUPPORT_H

#include "User.h"
#include <string>

class User; 

class ITSupport : public User {
public:
    ITSupport(const std::string& name, int id);
    void manageUserAccount(User* user, const std::string& action); 


private:
    
};

#endif // ITSUPPORT_H
