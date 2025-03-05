#include "Management.h"
#include"College.h"
#include <iostream>

Management::Management()
{
    cout<<"Management Constructor"<<endl;
}

/*vector<Staff>* Management::getStaff()
{
    return &m_Staffs;
}

list<Student>* Management::getStudent()
{
    return &m_Students;
}*/

void Management::initStudent(list<Student> *Students)
{
    m_Students = Students;
}

void Management::initStaff(vector<Staff> *Staffs)
{
    m_Staffs = Staffs;
}

void Management::addStudent(int ID,string name,string branch)
{
    cout<<"Student with ID "<<ID<<" added"<<endl;
    m_Students->push_back(Student(ID,name,branch));
    //m_students.emplace_back(ID,name,branch);
    cout<<"Student with ID "<<ID<<" added"<<endl;

}

void Management::deleteStudent(int ID)
{
    for(auto i = m_Students->begin();i != m_Students->end();i++)
    {
        if(i->getID() == ID)
        {
            m_Students->erase(i);
            cout<<"Student with ID "<<ID<<" deleted"<<endl;
            return;
        }

    }
    cout<<"Student with ID "<<ID<<" not found"<<endl;
}

void Management::updateStudent(int ID, string name, string branch)
{
    for(auto i = m_Students->begin();i != m_Students->end();i++)
    {
        if(i->getID() == ID)
        {
            i->setDetails(name,branch);
        }
    }
    cout<<"Student with ID "<<ID<<" not found"<<endl;
}

void Management::addStaff(int ID, string name, string dept)
{
    cout<<"Student with ID "<<ID<<" added"<<endl;
    m_Staffs->push_back(Staff(ID,name,dept));
    cout<<"Student with ID "<<ID<<" added"<<endl;

}

void Management::deleteStaff(int ID)
{
    for(auto i = m_Staffs->begin();i != m_Staffs->end();i++)
    {
        if(i->getID() == ID)
        {
            m_Staffs->erase(i);
            cout<<"Staff with ID "<<ID<<" deleted"<<endl;
            return;
        }

    }
    cout<<"Staff with ID "<<ID<<" not found"<<endl;

}

void Management::updateStaff(int ID, string name, string department)
{
    for(auto i = m_Staffs->begin();i != m_Staffs->end();i++)
    {
        if(i->getID() == ID)
        {
            i->setStaffDetails(name,department);
        }
    }
    cout<<"Staff with ID "<<ID<<" not found"<<endl;
}

void Management::findStudent(int ID)
{
    for(auto i = m_Students->begin();i != m_Students->end();i++)
    {
        if(i->getID() == ID)
        {
            cout<<i->getName()<<endl;
            cout<<i->getBranch()<<endl;
        }
    }
    cout<<"Student with ID "<<ID<<" not found"<<endl;
}

void Management::findStaff(int ID)
{
    for(auto i = m_Staffs->begin();i != m_Staffs->end();i++)
    {
        if(i->getID() == ID)
        {
            cout<<i->getName()<<endl;
            cout<<i->getDepartment()<<endl;
        }
    }
    cout<<"Staff with ID "<<ID<<" not found"<<endl;
}

void Management::displayStudent()
{
    for(auto i = m_Students->begin();i != m_Students->end();i++)
    {
        cout<<i->getID()<<" "<<i->getName()<<" "<<i->getBranch()<<endl;
    }
}

void Management::displayStaff()
{
    for(auto i = m_Staffs->begin();i != m_Staffs->end();i++)
    {
        cout<<i->getID()<<" "<<i->getName()<<" "<<i->getDepartment()<<endl;
    }
}

void Management::operations()
{
    int choice,option = 0;
    int True = 1;
    int ID;
    string Name;
    string Branch;
    while(true)
    {
        cout<<"Enter 1.Student 2.Staff 3.Exit"<<endl;
        cin>>option;
        switch(option)
        {
        case student:
        {
            while(True)
            {
                cout<<"Enter 1.Add Student"<<endl<<"2.Delete student "<<endl<<"3.Update Student Details"<<endl;
                cout<<"4.Search Student"<<endl<<"5. Display student"<<endl;
                cout<<"6.Exit"<<endl;
                cin>>choice;
                switch(choice)
                {
                case Add:cout<<"Enter StudentID :";
                    cin>>ID;
                    cout<<"Name :";
                    cin>>Name;
                    cout<<"Branch :";
                    cin>>Branch;
                    addStudent(ID,Name,Branch);
                    cout<<"Hii"<<endl;
                    break;
                case Delete:cout<<"Enter StudentID :"<<endl;
                    cin>>ID;
                    deleteStudent(ID);
                    break;
                case Update:cout<<"Enter StudentID :";
                    cin>>ID;
                    cout<<"NewName :";
                    cin>>Name;
                    cout<<"NewBranch :";
                    cin>>Branch;
                    updateStudent(ID,Name,Branch);
                    break;
                case Search:cout<<"Enter StudentID :"<<endl;
                    cin>>ID;
                    findStudent(ID);
                    break;
                case Display:displayStudent();
                    break;
                case Exit:
                    True = 0;
                    break;
                default:
                    cout<<"Enter Valid option"<<endl;
                    break;
                }
            }
        }
        break;
        case staff:
        {
            True = 1;
            while(True)
            {
                cout<<"Enter 1.Add Staff"<<endl<<"2.Delete staff "<<endl<<"3.Update Staff Details"<<endl<<"4.Search Staff"<<endl<<"5. Display staffs"<<endl;
                cout<<"6.Exit"<<endl;
                cin>>choice;
                switch(choice)
                {
                case Add:cout<<"Enter StaffID :";
                    cin>>ID;
                    cout<<"Name :";
                    cin>>Name;
                    cout<<"Department :";
                    cin>>Branch;
                    addStaff(ID,Name,Branch);
                    cout<<"HIII"<<endl;
                    break;
                case Delete:cout<<"Enter StaffID :"<<endl;
                    cin>>ID;
                    deleteStaff(ID);
                    break;
                case Update:cout<<"Enter StaffID :";
                    cin>>ID;
                    cout<<"NewName :";
                    cin>>Name;
                    cout<<"NewDepartment :";
                    cin>>Branch;
                    updateStaff(ID,Name,Branch);
                    break;
                case Search:cout<<"Enter StaffID :"<<endl;
                    cin>>ID;
                    findStaff(ID);
                    break;
                case Display:displayStaff();
                    break;
                case Exit:
                    True = 0;
                    break;
                default:
                    cout<<"Enter Valid option"<<endl;
                    break;
                }
            }
        }
        break;
        case Logout:
        {
            exit(0);
        }
        break;
        default:
            cout<<"Invalid input"<<endl;
            break;
        }
    }
}

Management::~Management()
{
    cout<<"Management Destructor"<<endl;
}
