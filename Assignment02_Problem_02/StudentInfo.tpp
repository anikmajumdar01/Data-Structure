#include "StudentInfo.h"
StudentInfo::StudentInfo() {
    // blank constructor
    name = "";
    ID = 0;
    CGPA = 0.0;
}

StudentInfo::StudentInfo(string name, int ID, double CGPA) {
    this->name = name;
    this->ID = ID;
    this->CGPA = CGPA;
}

string StudentInfo::getName() {
    return name;
}

void StudentInfo::setName(string name) {
    this->name = name;
}

int StudentInfo::getID() {
    return ID;
}

void StudentInfo::setID(int ID) {
    this->ID = ID;
}

double StudentInfo::getCGPA() {
    return CGPA;
}

void StudentInfo::setCGPA(double CGPA) {
    this->CGPA = CGPA;
}

void StudentInfo::print() {
    cout<<"Name: "<<name<<" ID: "<<ID<<" CGPA: "<<CGPA<<endl;
}
