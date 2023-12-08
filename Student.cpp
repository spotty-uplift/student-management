// Student.cpp
#include "Student.h"

Student::Student(int studentId, const std::string& name) : studentId(studentId), name(name) {}

void Student::enrollCourse(const std::string& course) {
    enrolledCourses.push_back(course);
}

void Student::displayInfo() const {
    std::cout << "Student ID: " << studentId << "\n";
    std::cout << "Name: " << name << "\n";
    std::cout << "Enrolled Courses:\n";
    for (const auto& course : enrolledCourses) {
        std::cout << "- " << course << "\n";
    }
    std::cout << "\n";
}
