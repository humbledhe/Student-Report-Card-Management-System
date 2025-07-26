#include <iostream>

struct Students // Keeping track of the students details....
{
    std::string StudentName;
    float Gpa;

    Students(std::string studentName, float gpa) : StudentName(studentName), Gpa(gpa) {}
};