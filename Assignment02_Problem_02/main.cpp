#include <iostream>
#include "StudentInfo.h"
#include "QueueType.h"
using namespace std;

int main()
{
    StudentInfo a("Rahul",01,3.1);
    StudentInfo b("Partha",02,3.2);
    StudentInfo c("Ankita",03,3.3);
    StudentInfo d("Prithula",04,3.4);
    StudentInfo e("Anik",05,3.5);

    QueueType StudentList;
    StudentList.EnQueue(a);
    StudentList.EnQueue(b);
    StudentList.EnQueue(c);
    StudentList.EnQueue(d);
    StudentList.EnQueue(e);

    cout<<"Student list: "<<endl;

    StudentInfo tempStudent;
    for(int i=0;i<5;i++)
    {
        StudentList.DeQueue(tempStudent);
        tempStudent.print();
    }


    return 0;
}
