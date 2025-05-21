#ifndef REGISTRATION_H
#define REGISTRATION_H

#include <string>

class Student; // Forward declaration
class Course; // Forward declaration

class Registration {
public:
    Registration(Student* student, Course* course);

    Student* getStudent() const;
    Course* getCourse() const;

private:
    Student* student;
    Course* course;

};

#endif // REGISTRATION_H
