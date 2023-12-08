// Course.h
#ifndef COURSE_H
#define COURSE_H

#include <iostream>
#include <string>
#include <vector>

class Course {
public:
    Course(int courseId, const std::string& title);

    void addStudent(const Student& student);
    void displayInfo() const;

private:
    int courseId;
    std::string title;
    std::vector<Student> enrolledStudents;
};

#endif // COURSE_H
