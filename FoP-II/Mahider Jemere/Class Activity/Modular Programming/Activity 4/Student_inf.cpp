#include <iostream>

using namespace std;

//This program accepts and prints out informations related to students
struct student{
    string id;
    string name;
    float testMark;
    float finalMark;
    float sumMark;
};
int main()
{
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

    cout<<"Name: "<<stud.name<<endl;
    cout<<"ID: "<<stud.id<<endl;
    cout<<"Test mark: "<<stud.testMark<<"\nFinal mark: "<<stud.finalMark<<"\nSum: "<<stud.sumMark;

    return 0;
}

