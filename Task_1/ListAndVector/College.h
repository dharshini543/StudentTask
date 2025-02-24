#ifndef COLLEGE_H
#define COLLEGE_H
#include"Staff.h"
#include"Student.h"
#include <list>
#include <vector>

class College
{
    vector<Staff>m_staffs;
    list<Student>m_students;
public:
    College();
    void addStudent(int ID,string name,string branch);
    void addStaff(int ID,string name,string department);
    void deleteStudent(int ID);
    void deleteStaff(int ID);
    void updateStudent(int ID,string name,string branch);
    void updateStaff(int ID,string name,string department);
    void displayStudent();
    void displayStaff();
    ~College();
};

#endif // COLLEGE_H
