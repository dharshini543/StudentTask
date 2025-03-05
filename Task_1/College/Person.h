#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;
class Person
{
protected:
    int m_ID;
    string m_name;
    string m_dept;
public:
    Person();
    //Person(int ID,string name,string dept);
    ~Person();
};

#endif // PERSON_H
