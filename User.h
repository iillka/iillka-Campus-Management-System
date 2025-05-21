#ifndef USER_H
#define USER_H

#include <string>

class User {
public:
    User(const std::string& name, int id, const std::string& role);
    virtual ~User() = default; 

    std::string getName() const;
    int getId() const;
    std::string getRole() const;

protected:
    std::string name;
    int id;
    std::string role;
};

#endif // USER_H
