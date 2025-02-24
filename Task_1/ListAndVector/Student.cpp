#include "Student.h"
#include <iostream>

Student::Student(int ID,string name,string branch)
{
    m_ID = ID;
    m_name = name;
    m_branch = branch;
}

int Student::getID()
{
    return m_ID;
}

string Student::getName()
{
    return m_name;
}

string Student::getBranch()
{
    return m_branch;
}

void Student::setDetails(string name, string branch)
{
    m_name = name;
    m_branch = branch;
}

Student::~Student()
{
    cout<<"Student Destructor"<<endl;
}
