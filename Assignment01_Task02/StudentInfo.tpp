#include"StudentInfo.h"
using namespace std;
StudentInfo::StudentInfo()
{
}

int StudentInfo::getStudentId()
{
    return studentId;
}

string StudentInfo::getStudentName()
{
    return studentName;
}

double StudentInfo::getCgpa()
{
    return cgpa;
}

void StudentInfo::setStudentID(int  studentId)
{
    this->studentId=studentId;
}


void StudentInfo::setStudentName(string  studentName)
{
    this->studentName=studentName;
}

void StudentInfo::setCgpa(double  cgpa)
{
    this->cgpa=cgpa;
}

void StudentInfo::printInfo()
{
    cout<<getStudentId()<<","<<getStudentName()<<","<<getCgpa()<<endl;
}


bool StudentInfo::operator==(StudentInfo secondStudent)
{

    return ((studentId==secondStudent.getStudentId()) || (studentName==secondStudent.getStudentName()) || (cgpa==secondStudent.getCgpa()));
}


bool StudentInfo::operator!=(StudentInfo secondStudent)
{
     return ((studentId!=secondStudent.getStudentId())&& (studentName!=secondStudent.getStudentName()) && (cgpa!=secondStudent.getCgpa()));
}



StudentInfo::~StudentInfo()
{

}
