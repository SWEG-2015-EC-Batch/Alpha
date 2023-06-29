#include <iostream>

using namespace std;

//This program is the updated version of student_inf.cpp of activity 4
//The link for the older version: https://github.com/SWEG-2015-EC-Batch/Alpha/blob/main/FoP-II/Mahider%20Jemere/Class%20Activity/Modular%20Programming/Activity%204/Student_inf.cpp

struct student{
    string id;
    string name;
    float testMark;
    float finalMark;
    float sumMark;
};

student sum_marks();
int main()
{
    student stud=sum_marks();

    cout<<"Name: "<<stud.name<<endl;
    cout<<"ID: "<<stud.id<<endl;
    cout<<"Test mark: "<<stud.testMark<<"\nFinal mark: "<<stud.finalMark<<"\nSum: "<<stud.sumMark;

    return 0;
}

student sum_marks(){
    student stud;
    cout<<"PLease enter the name of the student: ";
    getline(cin,stud.name);
    cout<<"Please enter the ID of the student: ";
    getline(cin,stud.id);
    cout<<"Please enter the test mark of the student: ";
    cin>>stud.testMark;
    cout<<"Please enter the final mark of the student: ";
    cin>>stud.finalMark;
    stud.sumMark=stud.finalMark+stud.testMark;

    return stud;
}

