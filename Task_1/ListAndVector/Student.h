#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using namespace std;

class Student
{
    int m_ID;
    string m_name;
    string m_branch;
public:
    Student(int ID,string name,string branch);
    int getID();
    string getName();
    string getBranch();
    void setDetails(string name,string branch);
    ~Student();
};

#endif // STUDENT_H
