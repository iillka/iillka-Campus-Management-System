#ifndef STUDENT_H
#define STUDENT_H

#include "User.h"
#include <vector>
#include <string>

class Course; // Forward declaration
class Grade; // Forward declaration
class Attendance; // Forward declaration

class Student : public User {
public:
    Student(const std::string& name, int id);
    void registerCourse(Course* course);
    void dropCourse(Course* course); 
    const std::vector<Course*>& getRegisteredCourses() const;

    void addGrade(Grade* grade);
    const std::vector<Grade*>& getGrades() const;

    void addAttendance(Attendance* attendance);
    const std::vector<Attendance*>& getAttendanceRecords() const;

private:
    std::vector<Course*> registeredCourses;
    std::vector<Grade*> grades;
    std::vector<Attendance*> attendanceRecords;
};

#endif // STUDENT_H
