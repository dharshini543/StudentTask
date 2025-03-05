#ifndef MANAGEMENT_H
#define MANAGEMENT_H

#include "Staff.h"
#include "Student.h"
#include <list>
#include <string>
#include <vector>
using namespace std;
class Management
{    
private:
    vector<Staff>* m_Staffs;
    list<Student>* m_Students;
public:
    Management();
    vector<Staff>* getStaff();
    list<Student>* getStudent();
    void initStudent(list<Student>* Students);
    void initStaff(vector<Staff>* Staffs);
    void addStudent(int ID,string name,string branch);
    void addStaff(int ID,string name,string department);
    void deleteStudent(int ID);
    void deleteStaff(int ID);
    void updateStudent(int ID,string name,string branch);
    void updateStaff(int ID,string name,string department);
    void findStudent(int id);
    void findStaff(int id);
    void displayStudent();
    void displayStaff();
    void operations();
    ~Management();
};

#endif // MANAGEMENT_H
