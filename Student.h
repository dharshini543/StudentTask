#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <string>
using namespace std;

class Student:public Person
{
public:
    Student(int ID,string name,string dept);
    int getID();
    string getName();
    string getBranch();
    void setDetails(string name,string dept);
    ~Student();
};

#endif // STUDENT_H
