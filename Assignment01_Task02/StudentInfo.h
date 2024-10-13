#ifndef STUDENTINFO_H
#define STUDENTINFO_H
#include <string>
using namespace std;


class StudentInfo
{
    public:
        StudentInfo();
        ~StudentInfo();
        int getStudentId();
        string getStudentName();
        double getCgpa();
        void setStudentID(int);
        void setStudentName(string);
        void setCgpa(double);
        void printInfo();
        bool operator!=(StudentInfo);
        bool operator==(StudentInfo);
    protected:

    private:
        int studentId;
        string studentName;
        double cgpa;
};
#include"StudentInfo.tpp"
#endif // STUDENTINFO_H

