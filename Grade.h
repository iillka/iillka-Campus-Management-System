#ifndef GRADE_H
#define GRADE_H

#include <string>

class Student; // Forward declaration
class Course; // Forward declaration

class Grade {
public:
    Grade(Student* student, Course* course, double score);

    Student* getStudent() const;
    Course* getCourse() const;
    double getScore() const;

private:
    Student* student;
    Course* course;
    double score;
};

#endif // GRADE_H
