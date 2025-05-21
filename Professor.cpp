#include "Professor.h"
#include "course.h"
#include "Student.h"
#include "Grade.h" 
#include "Attendance.h" 
#include <iostream> 

Professor::Professor(const std::string& name, int id) : User(name, id, "Professor") {}

void Professor::assignCourse(Course* course) {
    assignedCourses.push_back(course);
}

const std::vector<Course*>& Professor::getAssignedCourses() const {
    return assignedCourses;
}

void Professor::uploadGrade(Student* student, Course* course, double score) {
    std::cout << "Professor " << getName() << " attempting to upload grade " << score
              << " for student " << student->getName()
              << " in course " << course->getTitle() << std::endl;

}

void Professor::trackAttendance(Student* student, Course* course, bool present) {

    std::cout << "Professor " << getName() << " attempting to mark student " << student->getName()
              << " as " << (present ? "present" : "absent")
              << " in course " << course->getTitle() << std::endl;
}
