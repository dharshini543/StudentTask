#include"College.h"
#include <iostream>

College::College()
{
    cout<<"College Constructor"<<endl;
    m_staff = m_management->getStaff();
    m_student = m_management->getStudent();
}

College::~College()
{
    cout<<"College Destructor"<<endl;
    delete m_staff;
    delete m_student;
}
