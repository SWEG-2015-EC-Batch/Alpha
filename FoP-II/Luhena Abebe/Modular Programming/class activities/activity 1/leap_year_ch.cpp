
//This code written for the purpose of calculating the year is leap or not.
#include <iostream>
using namespace std;
int leap_year(int);

int main()
{  int year;
    if (leap_year(year)==1){
        cout<<"the year is leap year"<<endl;
    }
    else{
    cout << "the year is not leap year"<< endl;}
}

int leap_year(int){
    int year;
    cout<<"please enter the year"<<endl;
    cin>>year;
if(year%4==0){
    if(year%100==0){
        if(year%400==0){
         return 1;
        } else
        return 0;
    }else
    return 1;
}
else
    return 0;
}
