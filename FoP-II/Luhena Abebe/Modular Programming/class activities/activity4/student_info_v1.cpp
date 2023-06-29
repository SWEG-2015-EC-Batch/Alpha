#include <iostream>
using namespace std;
struct student
{
    string id;
    string name;
    float test_mark,final_mark,sum;

};
struct student grade;
int main()
{    cout<<"please enter your name"<<endl;
     getline(cin,grade.name);
    cout<<"please enter your id"<<endl;
     getline(cin,grade.id);
     cout<<"please enter your test"<<endl;
     cin>>grade.test_mark;
     cout<<"please enter your final"<<endl;
     cin>>grade.final_mark;
  grade.sum=grade.test_mark+grade.final_mark;
     cout<<grade.name<<" : ";
     cout<<grade.id<<endl;
     cout<<"your total mark : "<<grade.sum;
    return 0;
}
