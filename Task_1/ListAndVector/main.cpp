#include"College.h"
using namespace std;

int main()
{
    College myCollege;
    myCollege.addStudent(1,"Dharshini","Civil");
    myCollege.addStudent(2,"Pallavi","ISE");

    myCollege.addStaff(101,"asdf","Civil");
    myCollege.addStaff(102,"fgsdf","ISE");

    myCollege.deleteStudent(3);
    myCollege.deleteStudent(2);

    myCollege.deleteStaff(101);

    myCollege.displayStudent();
    myCollege.displayStaff();

    myCollege.updateStudent(1,"Likitha","Petroleum");
    myCollege.displayStudent();

    myCollege.updateStaff(102,"Marsh","Mech");
    myCollege.displayStaff();

    //myCollege.updateStaff()

    return 0;
}
