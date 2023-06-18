//This code is written for the purpose of understanding how argument are pass by refrences.
#include <iostream>
#include <string.h>
using namespace std;
void input(int hour,int minute,char merdiem[2]);
void conversion(int hour, int minute,char merdiem[2]);
void output(int hour,int minute,char&);

int main()
{  char choice;
int hour,minute;
char merdiem[2];
    do{
   input(hour,minute,merdiem);
   cout<<"Do you want to continue if your answer is yes, press any key if not press 'y' to exit"<<endl;
   cin>>choice;
   }
    while(choice!='y');
return 0;
}

void input(int hour,int minute,char merdiem[2]){

cout<<"This code provide the conversion of 24 hour notation to 12 hour notation, so please enter valid number for minute and hour"<<endl;
cout<<"please enter hour"<<endl;
cin>>hour;
cout<<"please enter minute"<<endl;
cin>>minute;
cout<<"please enter merdiem 'am'and 'pm'"<<endl;
cin>>merdiem;
conversion(hour,minute,merdiem);
}
void conversion(int hour,int minute,char merdiem[2]){
char merid;
if(stricmp(merdiem,"am")==0){
    merid='a';
}
if(stricmp(merdiem,"pm")==0){
    merid='p';
}

if(hour>=0&&hour<1){
    hour=hour+12;

}
if(hour>=13&&hour<24){
    hour=hour-12;
}
output(hour,minute,merid);
}
void output(int hour,int minute,char &merid){
    if(merid=='a'){
cout<<hour<<":"<<minute<<"am"<<endl;
}
if(merid=='p'){
cout<<hour<<":"<<minute<<"pm"<<endl;
}
}
