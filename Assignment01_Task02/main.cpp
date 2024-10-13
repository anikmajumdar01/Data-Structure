#include <iostream>
#include "UnsortedList.h"
#include"StudentInfo.h"
using namespace std;

int main()
{

    StudentInfo s1[max_items];
    for(int i=0;i<max_items;i++)
    {
        int ID;
        cout<<"Enter Student ID: ";
        cin>>ID;
        s1[i].setStudentID(ID);
        string Name;
        cout<<"Enter Student Name: ";
        cin>>Name;
        s1[i].setStudentName(Name);
        float CGPA;
        cout<<"Enter Student CGPA: ";
        cin>>CGPA;
        s1[i].setCgpa(CGPA);
        cout<<endl;
    }

    UnsortedList<StudentInfo> obj;
    for(int i=0;i<max_items;i++)
    {
        obj.InsertItem(s1[i]);
    }
    StudentInfo tempStudent;
    cout<<"Student Data"<<endl;
    cout<<"--------------"<<endl;
    for(int i=0;i<obj.LengthIs();i++)
    {
        obj.GetNextItem(tempStudent);
        tempStudent.printInfo();
    }
    obj.ResetList();
    cout<<endl<<endl;

    StudentInfo tempInfo;
    int ID_Delete;
    cout<<"Enter the ID which you want to delete: ";
    cin>>ID_Delete;
    tempInfo.setStudentID(ID_Delete);
    obj.DeleteItem(tempInfo);
    cout<<" After deleting the Info again Printing the Student Data"<<endl;
    cout<<"--------------------------------------------------------"<<endl;
    for(int i=0;i<obj.LengthIs();i++)
    {
        obj.GetNextItem(tempStudent);
        tempStudent.printInfo();
    }
    obj.ResetList();
    cout<<endl<<endl;

    bool found=false;
    int found_ID;
    cout<<"Enter the ID which you want to search: ";
    cin>>found_ID;
    tempInfo.setStudentID(found_ID);
    obj.RetrieveItem(tempInfo,found);
    if(found)
    {
        cout<<"Student Info is Found"<<endl;
        tempInfo.printInfo();
    }
    else
    {
        cout<<"Student Info is not Found"<<endl;
    }
    cout<<endl<<endl;

    cout<<"Student Data"<<endl;
    cout<<"--------------"<<endl;
    for(int i=0;i<obj.LengthIs();i++)
    {
        obj.GetNextItem(tempStudent);
        tempStudent.printInfo();
    }
    obj.ResetList();
    cout<<endl<<endl;
    return 0;
}
