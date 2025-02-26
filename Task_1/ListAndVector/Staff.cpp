#include "Staff.h"
Staff::Staff(int ID, string name, string department)
{
    m_ID = ID;
    m_name = name;
    m_dept = department;
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

}
