#include "Grade.h"
#include "Student.h"
#include "course.h"

Grade::Grade(Student* student, Course* course, double score)
    : student(student), course(course), score(score) {}

Student* Grade::getStudent() const {
    return student;
}

Course* Grade::getCourse() const {
    return course;
}

double Grade::getScore() const {
    return score;
}
