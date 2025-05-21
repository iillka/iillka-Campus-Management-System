#include "ITSupport.h"
#include "User.h" 
#include <iostream> 

ITSupport::ITSupport(const std::string& name, int id) : User(name, id, "IT Support") {}

void ITSupport::manageUserAccount(User* user, const std::string& action) {
    std::cout << "IT Support " << getName() << " performing action '" << action
              << "' on user account: " << user->getName() << " (" << user->getRole() << ")" << std::endl;
}
