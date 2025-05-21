#ifndef ADMINISTRATOR_H
#define ADMINISTRATOR_H

#include "User.h"
#include <vector>
#include <string>

class Event; 

class Administrator : public User {
public:
    Administrator(const std::string& name, int id);
    void scheduleEvent(Event* event);

private:
};

#endif // ADMINISTRATOR_H
