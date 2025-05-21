#ifndef EVENT_H
#define EVENT_H

#include <string>

class Event {
public:
    Event(const std::string& title, const std::string& date, const std::string& time, const std::string& location);

    std::string getTitle() const;
    std::string getDate() const;
    std::string getTime() const;
    std::string getLocation() const;

private:
    std::string title;
    std::string date;
    std::string time;
    std::string location;
};

#endif // EVENT_H
