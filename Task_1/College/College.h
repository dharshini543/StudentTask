#ifndef COLLEGE_H
#define COLLEGE_H
#include "Management.h"
#include"Staff.h"
#include"Student.h"
enum
{
    student = 1,
    staff,
    Logout

};
enum
{
    Add = 1,
    Delete,
    Update,
    Search,
    Display,
    Exit
};

class College
{
private:
    list<Student> m_student;
    vector<Staff> m_staff;
public:
    Management* m_management;
    Staff* m_staffs;
    Student* m_students;
    College();
    void operations();
     ~College();
};

#endif // COLLEGE_H
