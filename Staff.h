#ifndef STAFF_H
#define STAFF_H

#include "Person.h"
#include <string>
using namespace std;
class Staff:public Person
{
public:
    Staff();
    Staff(int ID,string name,string dept);
    int getID();
    void setStaffDetails(string name,string department);
    string getName();
    string getDepartment();
    ~Staff();

};

#endif // STAFF_H
