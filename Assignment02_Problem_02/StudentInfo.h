#ifndef STUDENTINFO_H
#define STUDENTINFO_H
#include <string>

using namespace std;

class StudentInfo{

private:
    string name;
    int ID;
    double CGPA;
public:
    StudentInfo();
    StudentInfo(string, int, double);
    string getName();
    void setName(string);
    int getID();
    void setID(int);
    double getCGPA();
    void setCGPA(double);
    void print();
};

#include "StudentInfo.tpp"

#endif
