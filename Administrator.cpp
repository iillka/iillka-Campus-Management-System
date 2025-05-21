#include "Administrator.h"
#include "Event.h" 
#include <iostream> 

Administrator::Administrator(const std::string& name, int id) : User(name, id, "Administrator") {}

void Administrator::scheduleEvent(Event* event) {
    std::cout << "Administrator " << getName() << " scheduled event: " << event->getTitle() << std::endl;
}
