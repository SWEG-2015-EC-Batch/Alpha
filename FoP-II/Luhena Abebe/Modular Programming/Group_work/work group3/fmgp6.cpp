#include <iostream>
#include <fstream>
#include <string>
using namespace std;
struct student_grade{
string name;
float exam_1,exam_2,homework,final_exam,final_grade;
char grade_letter;
};

int main()
{   student_grade grade[20];
   /* ofstream fout;
    fout.open("my file.txt",ios::out);
    for(int i=0;i<20;i++){
             cout<<"please enter your name for the "<<i<<" student"<<endl;
             getline(cin,grade[i].name);
             cout<<"please enter mark of exam 1"<<endl;
             cin>>grade[i].exam_1;
             cout<<"please enter mark of exam 2"<<endl;
             cin>>grade[i].exam_2;
             cout<<"please enter mark of homework"<<endl;
             cin>>grade[i].homework;
             cout<<"please enter mark of final exam "<<endl;
             cin>>grade[i].final_exam;
             cin.ignore();
            }
    if(fout.is_open()){
            fout<<"name"<<"\t"<<"exam 1"<<"\t"<<"exam 2"<<"\t"<<"homework"<<"\t"<<"final"<<"\t"<<"total"<<"\t"<<"grade"<<endl;
        for(int i=0;i<20;i++){
            fout<<grade[i].name<<"\t"<<grade[i].exam_1<<"\t"<<grade[i].exam_2<<"\t"<<grade[i].homework<<"\t"<<grade[i].final_exam<<"\t";
            grade[i].final_grade=0.2*grade[i].exam_1+0.2*grade[i].exam_2+0.35*grade[i].homework+0.25*grade[i].final_exam;
            fout<<grade[i].final_grade<<"\t";
            if(grade[i].final_grade>=90&&grade[i].final_grade<=100){
                grade[i].grade_letter='A';
                fout<<grade[i].grade_letter;
            }
            if(grade[i].final_grade>=80&&grade[i].final_grade<90){
                grade[i].grade_letter='B';
                fout<<grade[i].grade_letter;
            }
            if(grade[i].final_grade>=70&&grade[i].final_grade<80){
                grade[i].grade_letter='C';
                fout<<grade[i].grade_letter;
            }
            if(grade[i].final_grade>=60&&grade[i].final_grade<70){
                grade[i].grade_letter='D';
                fout<<grade[i].grade_letter;
            }
            if(grade[i].final_grade<60){
                grade[i].grade_letter='F';
                fout<<grade[i].grade_letter;
            }
            fout<<endl;

    }
    fout.close();
    }*/

    ifstream fin;
    fin.open("my file.txt",ios::in);
    if(fin.is_open()){
      string name;
      while (getline(fin,name)){
            cout<<name<<"\n";
      }
      fin.close();
    }


    return 0;
}
