#ifndef ATTENDANCE_H
#define ATTENDANCE_H

#include <string>

class Student; // Forward declaration
class Course; // Forward declaration

class Attendance {
public:
    Attendance(Student* student, Course* course, const std::string& date, bool present);

    Student* getStudent() const;
    Course* getCourse() const;
    std::string getDate() const;
    bool isPresent() const;

private:
    Student* student;
    Course* course;
    std::string date;
    bool present;
};

#endif // ATTENDANCE_H
