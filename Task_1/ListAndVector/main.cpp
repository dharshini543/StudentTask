#include"College.h"
#include<iostream>
using namespace std;

int main()
{
    College myCollege;
    int choice;
    int ID;
    string Name;
    string Branch;
    while(true)
    {
    cout<<"Enter 1.Add Student"<<endl<<"2.Delete student "<<endl<<"3.Update Student Details"<<endl<<"4.Search Student"<<endl<<"5. Display student"<<endl;
    cin>>choice;
    switch(choice)
    {
    case 1:cout<<"Enter StudentID :";
        cin>>ID;
        cout<<"Name :";
        cin>>Name;
        cout<<"Branch :";
        cin>>Branch;
        myCollege.addStudent(ID,Name,Branch);
        break;
    case 2:cout<<"Enter StudentID :"<<endl;
            cin>>ID;
        myCollege.deleteStudent(ID);
            break;
    case 3:cout<<"Enter StudentID :";
        cin>>ID;
        cout<<"NewName :";
        cin>>Name;
        cout<<"NewBranch :";
        cin>>Branch;
        myCollege.updateStudent(ID,Name,Branch);
        break;
    case 4:cout<<"Enter StudentID :"<<endl;
        cin>>ID;
        myCollege.findStudent(ID);
            break;
    case 5:myCollege.displayStudent();
            break;
    default:
        cout<<"Enter Valid option"<<endl;
        break;
    }
    }

    return 0;
}
