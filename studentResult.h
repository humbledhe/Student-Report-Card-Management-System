#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include "studentDetails.h"

class StudentManager
{
private:
    std::vector<Students> Students;
    int AdminPassword;

public:
    StudentManager() : AdminPassword(1234) {}
    int getAdminPassword()
    {
        return AdminPassword;
    }
    void addStudent(std::string studentName, float studentGpa)
    {
        Students.emplace_back(studentName, studentGpa);
    }
    void viewStudents()
    {
        for (const auto &student : Students)
            std::cout << "Name: " << student.StudentName << std::endl
                      << "Gpa: " << student.Gpa << std::endl;
    }
    void deleteStudents(std::string studentName)
    {
        for (auto it = Students.begin(); it != Students.end(); it++)
        {
            if (it->StudentName == studentName) // Students gpa will also be deleted
                it = Students.erase(it);
        }
    }
    int getNumberOfStudents()
    {
        return Students.size();
    }
};