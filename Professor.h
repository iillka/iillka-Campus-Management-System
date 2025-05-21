#ifndef PROFESSOR_H
#define PROFESSOR_H

#include "User.h"
#include <vector>
#include <string>

class Course; // Forward declaration
class Student; // Forward declaration
class Grade; // Forward declaration
class Attendance; // Forward declaration

class Professor : public User {
public:
    Professor(const std::string& name, int id);
    void assignCourse(Course* course);
    const std::vector<Course*>& getAssignedCourses() const;

    void uploadGrade(Student* student, Course* course, double score);
    void trackAttendance(Student* student, Course* course, bool present);

private:
    std::vector<Course*> assignedCourses;
};

#endif // PROFESSOR_H
