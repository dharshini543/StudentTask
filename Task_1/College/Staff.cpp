#include "Staff.h"
#include <iostream>

Staff::Staff()
{
    cout<<"Staff Constructor"<<endl;
}

Staff::Staff(int ID, string name, string dept)
{
   m_ID = ID;
   m_name = name;
   m_dept = dept;
    cout<<ID<<endl;
}

int Staff::getID()
{
    return m_ID;
}

void Staff::setStaffDetails(string name, string department)
{
    m_name = name;
    m_dept = department;
}

string Staff::getName()
{
    return m_name;
}

string Staff::getDepartment()
{
    return m_dept;
}

Staff::~Staff()
{
    cout<<"Staff Destructor"<<endl;
}
