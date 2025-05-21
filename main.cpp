// main.cpp (Updated)
#include <iostream>
#include <vector>
#include "User.h"
#include "Student.h"
#include "Professor.h"
#include "Administrator.h"
#include "ITSupport.h"
#include "course.h"
#include "Registration.h"
#include "Attendance.h"
#include "Grade.h"
#include "Event.h"

int main() {
    // Create instances of different users
    Student* student1 = new Student("Ilaha Mammadova", 1001);
    Professor* professor1 = new Professor("Dr. Smith", 2001);
    Administrator* admin1 = new Administrator("Ms. Davis", 3001);
    ITSupport* it1 = new ITSupport("Mr. Brown", 4001);

    // Create a course
    Course* seCourse = new Course("Software Engineering");

    // Demonstrate basic user info
    std::cout << "User: " << student1->getName() << " (ID: " << student1->getId() << ", Role: " << student1->getRole() << ")" << std::endl;
    std::cout << "User: " << professor1->getName() << " (ID: " << professor1->getId() << ", Role: " << professor1->getRole() << ")" << std::endl;
    std::cout << "User: " << admin1->getName() << " (ID: " << admin1->getId() << ", Role: " << admin1->getRole() << ")" << std::endl;
    std::cout << "User: " << it1->getName() << " (ID: " << it1->getId() << ", Role: " << it1->getRole() << ")" << std::endl;
    std::cout << "Course: " << seCourse->getTitle() << std::endl;

    std::cout << "\n--- Interactions ---\n";

    // Student registers for a course
    student1->registerCourse(seCourse);
    // In a real system, a Registration object would be created here
    Registration* reg1 = new Registration(student1, seCourse);
    std::cout << student1->getName() << " registered for " << student1->getRegisteredCourses().size() << " course(s)." << std::endl;

    // Professor assigned a course
    professor1->assignCourse(seCourse);
    std::cout << professor1->getName() << " is assigned to " << professor1->getAssignedCourses().size() << " course(s)." << std::endl;

    // Professor uploads grades (demonstration)
    professor1->uploadGrade(student1, seCourse, 95.5);
    // In a real system, a Grade object would be created and added to student/course
    Grade* grade1 = new Grade(student1, seCourse, 95.5);
    student1->addGrade(grade1);
    // seCourse->addGrade(grade1); // If Course had addGrade

    // Professor tracks attendance (demonstration)
    professor1->trackAttendance(student1, seCourse, true);
    // In a real system, an Attendance object would be created and added to student/course
    Attendance* attendance1 = new Attendance(student1, seCourse, "2023-10-27", true);
    student1->addAttendance(attendance1);
    // seCourse->addAttendance(attendance1); // If Course had addAttendance

    // Administrator schedules an event
    Event* orientationEvent = new Event("New Student Orientation", "2023-09-01", "10:00 AM", "University Auditorium");
    admin1->scheduleEvent(orientationEvent);
    // In a real system, the event would be added to a central event list

    // IT Support manages a user account
    it1->manageUserAccount(student1, "reset password");

    std::cout << "\n--- Student Data ---\n";
    std::cout << student1->getName() << "'s Grades:\n";
    for (const auto& grade : student1->getGrades()) {
        std::cout << "- " << grade->getCourse()->getTitle() << ": " << grade->getScore() << std::endl;
    }

    std::cout << student1->getName() << "'s Attendance Records:\n";
    for (const auto& attendance : student1->getAttendanceRecords()) {
        std::cout << "- " << attendance->getCourse()->getTitle() << " on " << attendance->getDate()
                  << ": " << (attendance->isPresent() ? "Present" : "Absent") << std::endl;
    }


    // Clean up allocated memory
    delete student1;
    delete professor1;
    delete admin1;
    delete it1;
    delete seCourse;
    delete reg1; // Clean up registration
    delete grade1; // Clean up grade
    delete attendance1; // Clean up attendance
    delete orientationEvent; // Clean up event


    return 0;
}
