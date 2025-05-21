// course.h
#ifndef COURSE_H
#define COURSE_H

#include <string>
#include <vector>

class Student; // Forward declaration

class Course {
public:
    Course(const std::string& title);
    std::string getTitle() const { return title; } // Added getter for title
    void addStudent(Student* student);
    void uploadGrades(); // Placeholder
    void trackAttendance(); // Placeholder

private:
    std::string title;
    std::vector<Student*> enrolledStudents;
    // Potentially add lists for grades, attendance records, professor, etc.
};

#endif // COURSE_H
