#include <iostream>
#include <cmath>
using namespace std;
struct person
{   string name;
    char gender;
    int age;
    float weight,height,bmi;
};

int main()
{
    int j;
    cout<<"enter a"<<endl;
    cin>>j;
    struct person person_info[j];
    cin.ignore();
    for(int i=0;i<j;i++){
    cout<<"pleas enter your name"<<endl;
    getline(cin,person_info[i].name);
    cout<<"pleas enter your gender"<<endl;
    cin>>person_info[i].gender;
    cout<<"please enter you age"<<endl;
    cin>>person_info[i].age;
    cout<<"please enter you weight"<<endl;
    cin>>person_info[i].weight;
    cout<<"please enter you height"<<endl;
    cin>>person_info[i].height;
    person_info[i].bmi=person_info[i].weight/pow(person_info[i].height,2);}
    for(int i=0;i<j;i++){
    if(person_info[i].gender=='m'){
        if(person_info[i].bmi<18){
            cout<<"hello "<<person_info[i].name<<" your bmi is "<<person_info[i].bmi<<" you are under weight"<<endl;
        }
        else if(person_info[i].bmi>18&&person_info[i].bmi<25){
          cout<<"hello "<<person_info[i].name<<" your bmi is "<<person_info[i].bmi<<" you are normal"<<endl;
        }
        else
         cout<<"hello "<<person_info[i].name<<" your bmi is "<<person_info[i].bmi<<" you are over weight"<<endl;
    }
    else{
        if(person_info[i].bmi<18){
cout<<"hello "<<person_info[i].name<<" your bmi is "<<person_info[i].bmi<<" you are under weight"<<endl;
        }
        else if(person_info[i].bmi>18&&person_info[i].bmi<23){
           cout<<"hello "<<person_info[i].name<<" your bmi is "<<person_info[i].bmi<<" you are normal"<<endl;
        }
        else
         cout<<"hello "<<person_info[i].name<<" your bmi is "<<person_info[i].bmi<<" over weight"<<endl;
    }

    }
    }
