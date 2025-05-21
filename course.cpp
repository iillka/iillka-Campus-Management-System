#include "course.h"
#include "Student.h" 
#include <iostream> 

Course::Course(const std::string& title) : title(title) {}

void Course::addStudent(Student* student) {
    enrolledStudents.push_back(student);
    
}

void Course::uploadGrades() {

    std::cout << "Uploading grades for course: " << title << std::endl;
}

void Course::trackAttendance() {

    std::cout << "Tracking attendance for course: " << title << std::endl;
}
