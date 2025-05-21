#include "Student.h"
#include "course.h"
#include "Grade.h" 
#include "Attendance.h" 
#include <algorithm> 

Student::Student(const std::string& name, int id) : User(name, id, "Student") {}

void Student::registerCourse(Course* course) {
    registeredCourses.push_back(course);
    
}

void Student::dropCourse(Course* course) {
    
    registeredCourses.erase(std::remove(registeredCourses.begin(), registeredCourses.end(), course), registeredCourses.end());
    
}


const std::vector<Course*>& Student::getRegisteredCourses() const {
    return registeredCourses;
}

void Student::addGrade(Grade* grade) {
    grades.push_back(grade);
}

const std::vector<Grade*>& Student::getGrades() const {
    return grades;
}

void Student::addAttendance(Attendance* attendance) {
    attendanceRecords.push_back(attendance);
}

const std::vector<Attendance*>& Student::getAttendanceRecords() const {
    return attendanceRecords;
}
