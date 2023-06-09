#include <iostream>
using namespace std;
//This program checks a year if it is a leap year or not by accepting year from the user
int check_leap(int);
int main(){
    int the_year;
    cout<<"Please enter the year you want to check: ";
    cin>>the_year;
    cout<<check_leap(the_year);
    return 0;
}
int check_leap(int year){
    if (year%400==0){
        return 1;
    }
    else if(year%4==0 && year%100!=0){
        return 1;
    }
    else if(year%100==0 && year%4!=0){
        return 0;
    }
    return 0;
}
