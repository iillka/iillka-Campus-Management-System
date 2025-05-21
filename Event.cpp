#include "Event.h"

Event::Event(const std::string& title, const std::string& date, const std::string& time, const std::string& location)
    : title(title), date(date), time(time), location(location) {}

std::string Event::getTitle() const {
    return title;
}

std::string Event::getDate() const {
    return date;
}

std::string Event::getTime() const {
    return time;
}

std::string Event::getLocation() const {
    return location;
}
