#include <iostream>
#include<string.h>
using namespace std;
//This program converts 24 hour notation to 12 hour notation

void time_input();
void time_convert(int,int,char[]);
void time_output(int,int,char&);
int main()
{
    char check;//stores the decision of user on whether to continue or not
     do{
        time_input();
        cout<<"Do you want to continue(enter 'y' for yes or any other key to stop)";
        cin>>check;
     }while(check=='y');
     cout<<"Thank you for using this program!";
    return 0;
}

void time_input(){
    int hour,minute;
    char meridiem[3];
     cout<<"Please enter the time to be converted(the hour,the minute, and the AM/PM should be separated by space): ";
     cin>>hour>>minute>>meridiem;
     time_convert(hour,minute, meridiem);
}

void time_convert(int the_hour, int the_minute, char meridiem[3]){
        char merid;//stores am/pm
        if(stricmp(meridiem,"am")==0){
                merid='a';

        }
        else if(stricmp(meridiem,"pm")){
            merid='p';
        }
        else{
            merid='N';
        }

        //The conversion part
        if(the_hour>=13){
            the_hour=the_hour-12;
        }

        time_output(the_hour,the_minute,merid);
}



void time_output(int hour,int minute,char& merid){
    if(merid=='a'){
    cout<<"The time in 12 hour notation is "<<hour<<":"<<minute<<" am"<<endl;
    }
    else if(merid=='p'){
        cout<<"The time in 12 hour notation is "<<hour<<":"<<minute<<" pm"<<endl;
    }
    else{
        cout<<"The time in 12 hour notation is "<<hour<<":"<<minute<<endl;
    }
}
