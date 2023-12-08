// Student.h
#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>

class Student {
public:
    Student(int studentId, const std::string& name);

    void enrollCourse(const std::string& course);
    void displayInfo() const;

private:
    int studentId;
    std::string name;
    std::vector<std::string> enrolledCourses;
};

#endif // STUDENT_H
