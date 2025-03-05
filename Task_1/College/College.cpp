#include"College.h"

College::College()
{
    m_staffs = new Staff;
    m_students = new Student;
    m_management = new Management;
    m_management->initStudent(&m_student);
    m_management->initStaff(&m_staff);
}

void College::operations()
{
    m_management->operations();
}

College::~College()
{
    delete m_staffs;
    delete m_students;
}
