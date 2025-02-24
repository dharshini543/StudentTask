#ifndef STAFF_H
#define STAFF_H

#include <string>
using namespace std;
class Staff
{
private:
    int m_ID;
    string m_name;
    string m_dept;

public:
    Staff(int ID,string name,string department);
    int getID();
    void setStaffDetails(string name,string department);
    string getName();
    string getDepartment();
    ~Staff();

};

#endif // STAFF_H
