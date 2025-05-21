#include "Attendance.h"
#include "Student.h"
#include "course.h"

Attendance::Attendance(Student* student, Course* course, const std::string& date, bool present)
    : student(student), course(course), date(date), present(present) {}

Student* Attendance::getStudent() const {
    return student;
}

Course* Attendance::getCourse() const {
    return course;
}

std::string Attendance::getDate() const {
    return date;
}

bool Attendance::isPresent() const {
    return present;
}
