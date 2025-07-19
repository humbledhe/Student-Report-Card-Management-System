#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include "studentDetails.h"

class StudentManager
{
private:
    std::vector<Students> students;
    int adminPassword;

public:
    StudentManager()
    {
        this->adminPassword = 1234;
    }
    int getAdminPassword()
    {
        return this->adminPassword;
    }
    void addStudent(std::string studentName, float studentGpa)
    {
        students.push_back({studentName, studentGpa});
    }
    void viewStudents()
    {
        for (const auto &s : students)
            std::cout << "Name: " << s.studentName << std::endl
                      << "Gpa: " << s.gpa << std::endl
                      << std::endl;
    }
    void deleteStudents(std::string studentName)
    {
        for (auto it = students.begin(); it != students.end(); it++)
        {
            if (it->studentName == studentName) // Students gpa will also be deleted
                it = students.erase(it);
        }
    }
    int getNumberOfStudents()
    {
        return students.size();
    }
};