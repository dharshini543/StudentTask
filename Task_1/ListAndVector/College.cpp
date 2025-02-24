#include "College.h"
#include <iostream>

College::College()
{

}

void College::addStudent(int ID,string name,string branch)
{
    m_students.push_back(Student(ID,name,branch));
}

void College::deleteStudent(int ID)
{
    for(auto i = m_students.begin();i != m_students.end();i++)
    {
        if(i->getID() == ID)
        {
            m_students.erase(i);
            cout<<"Student with ID "<<ID<<" deleted"<<endl;
            return;
        }

     }
    cout<<"Student with ID "<<ID<<" not found"<<endl;
}

void College::updateStudent(int ID, string name, string branch)
{
    for(auto i = m_students.begin();i != m_students.end();i++)
    {
        if(i->getID() == ID)
        {
            i->setDetails(name,branch);
        }
    }
}

void College::addStaff(int ID, string name, string department)
{
    m_staffs.push_back(Staff(ID,name,department));
}

void College::deleteStaff(int ID)
{
    for(auto i = m_staffs.begin();i != m_staffs.end();i++)
    {
        if(i->getID() == ID)
        {
            m_staffs.erase(i);
            cout<<"Staff with ID "<<ID<<" deleted"<<endl;
            return;
        }

    }
    cout<<"Staff with ID "<<ID<<" not found"<<endl;

}

void College::updateStaff(int ID, string name, string department)
{
    for(auto i = m_staffs.begin();i != m_staffs.end();i++)
    {
        if(i->getID() == ID)
        {
            i->setStaffDetails(name,department);
        }
    }
}

void College::displayStudent()
{
    for(auto i = m_students.begin();i != m_students.end();i++)
    {
        cout<<i->getID()<<" "<<i->getName()<<" "<<i->getBranch()<<endl;
    }
}

void College::displayStaff()
{
    for(auto i = m_staffs.begin();i != m_staffs.end();i++)
    {
        cout<<i->getID()<<" "<<i->getName()<<" "<<i->getDepartment()<<endl;
    }
}

College::~College()
{

}
