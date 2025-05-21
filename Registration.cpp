#include "Registration.h"
#include "Student.h"
#include "course.h"

Registration::Registration(Student* student, Course* course)
    : student(student), course(course) {}

Student* Registration::getStudent() const {
    return student;
}

Course* Registration::getCourse() const {
    return course;
}
