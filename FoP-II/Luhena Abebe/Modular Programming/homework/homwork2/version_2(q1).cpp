//This code is written for the purpose of understanding structure.
#include <iostream>
using namespace std;
struct student
{   string id;
    string name;
    float test_mark,final_mark,sum;
};
 student grade;
student input();
void display(student grade);
int main()
{   student stu_grade;
     stu_grade=input();
     display(stu_grade);

    return 0;
}
student input(){
    student stu_grade;
cout<<"please enter your name"<<endl;
     getline(cin,stu_grade.name);
    cout<<"please enter your id"<<endl;
     getline(cin,stu_grade.id);
     cout<<"please enter your test"<<endl;
     cin>>stu_grade.test_mark;
     cout<<"please enter your final"<<endl;
     cin>>stu_grade.final_mark;
  stu_grade.sum=stu_grade.test_mark+stu_grade.final_mark;
  return stu_grade;
}
void display(student stu_grade){
cout<<stu_grade.name<<" : ";
     cout<<stu_grade.id<<endl;
     cout<<"your total mark : "<<stu_grade.sum;
}
