#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include "studentResult.h"

int main()
{
    system("cls");

    StudentManager student;

    int adminPassword;

    do
    {
        std::cout << "Student Management System\n\n";
        std::cout << "Enter administrative password: ";
        std::cin >> adminPassword;

        if (adminPassword != student.getAdminPassword())
            system("cls");
        else if (adminPassword == student.getAdminPassword())
        {
            system("cls");

            int options;

            do
            {
                std::cout << "Welcome Admin\n"
                          << "Press 1 to add student report\n"
                          << "Press 2 to delete student report\n"
                          << "Press 3 to view student report\n"
                          << "Press 4 to view number of students\n"
                          << "Press 5 to exit\n\n";

                std::cout << "> ";
                std::cin >> options;

                std::string studentName;

                switch (options)
                {
                case 1:
                    system("cls");

                    std::cout << "Enter student name: ";
                    std::cin >> studentName;

                    float studentGpa;
                    std::cout << "Enter student GPA: ";
                    std::cin >> studentGpa;

                    student.addStudent(studentName, studentGpa);
                    std::cout << std::endl
                              << std::endl;
                    break;
                case 2:
                    system("cls");

                    std::cout << "Enter student name: ";
                    std::cin >> studentName;

                    student.deleteStudents(studentName);
                    std::cout << std::endl
                              << std::endl;

                    break;
                case 3:
                    system("cls");

                    student.viewStudents();
                    std::cout << std::endl;
                    break;
                case 4:
                    system("cls");

                    std::cout << "Number of students: " << student.getNumberOfStudents() << std::endl
                              << std::endl;
                    break;
                }
            } while (options != 5);
            system("cls");
        }

    } while (true);

    return 0;
}