#include "Person.h"
#include <iostream>

Person::Person()
{
    cout<<"Person Constructor"<<endl;
}

/*Person::Person(int ID, string name, string dept)
{
    m_ID = ID;
    m_name = name;
    m_dept = dept;
    cout<<ID<<endl;
}*/

Person::~Person()
{
    cout<<"Person Destructor"<<endl;

}
