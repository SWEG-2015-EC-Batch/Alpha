#include <iostream>
#include <fstream>
using namespace std;

struct student{
    string name;
    double exam_1,exam_2,Homework,final_exam,final_grade;
    char grade;
};
int main()
{
    fstream sturec("result.dat",ios::out|ios::binary);
    if(!sturec.is_open()){
        cout<<"Couldn't open the file";
        return 0;
    }
    int num;
    student stud[20];
    cout<<"Please enter the number of students in numa class: ";
    cin>>num;
    if(num>20|num<1){
        cout<<"Invalid input! Please try again later.";
        return 0;
    }
    cin.ignore();
    for(int i=0;i<num;i++){

        cout<<"Please enter the name of student: ";
        getline(cin,stud[i].name);
        cout<<"Please enter the grade of his/her first exam: ";
        cin>>stud[i].exam_1;
        cout<<"Please enter the grade of his/her second exam: ";
        cin>>stud[i].exam_2;
        cout<<"Please enter the grade of his/her homework: ";
        cin>>stud[i].Homework;
        cout<<"Please enter the grade of his/her final exam: ";
        cin>>stud[i].final_exam;
        stud[i].final_grade=0.2*(stud[i].exam_1+stud[i].exam_2)+0.35*(stud[i].Homework)+0.25*stud[i].final_exam;
        if(stud[i].final_grade<=100 && stud[i].final_grade>=90){
            stud[i].grade='A';
        }
        else if(stud[i].final_grade<=89 && stud[i].final_grade>=80){
            stud[i].grade='B';
        }
        else if(stud[i].final_grade<=79 && stud[i].final_grade>=70){
            stud[i].grade='C';
        }
        else if(stud[i].final_grade>=69 && stud[i].final_grade<=60){
            stud[i].grade='D';
        }
        else if(stud[i].final_grade<60){
            stud[i].grade='F';
        }
        else{

            stud[i].grade='N';
        }
         cin.ignore();
        sturec.write((char*)&stud[i],sizeof(stud));

    }

    for(int i=0;i<num;i++){
            cout<<"Student "<<i+1<<endl;
        cout<<"Name: "<<stud[i].name<<endl;
        cout<<"Exam 1: "<<stud[i].exam_1<<endl;
        cout<<"Exam 2: "<<stud[i].exam_2<<endl;
        cout<<"Homework: "<<stud[i].Homework<<endl;
        cout<<"Final Exam: "<<stud[i].final_exam<<endl;
        cout<<"Final Grade: "<<stud[i].final_grade<<endl;
        cout<<"Letter Grade: "<<stud[i].grade<<endl;
    }
    return 0;
}
