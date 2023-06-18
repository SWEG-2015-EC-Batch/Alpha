#include<iostream>

using namespace std;

void input(int &hour,int &minute);
void time_con(int &hour,int &minute,char &t);
void output(int h,int m,char s);

int main(){
    int choic;

    do{
    int hour,minute;
    char s;

    input(hour,minute);
    time_con(hour,minute,s);
    output(hour,minute,s);

    cout << "do you want to continue?" << endl;
    cout << "1.yes\n2.no\n";
    cin >> choic;

    }while(choic == 1);

  return 0;
}

void input(int &hour,int &minute){
    cout << "Please Enter the hours: ";
    cin >> hour;

    if(hour < 0 || hour > 24){
        cout << "Please enter betwean 0 and 24 \n";
        input(hour,minute);
    }

    cout << "Please Enter the minute: ";
    cin >> minute;

    if(minute < 0 || minute > 60){
        cout << "You should enter betwean 0 and 60 minute. please try again.\n ";
        input(hour,minute);
    }
}

void time_con(int &hour,int &minute,char &t){
    if(hour > 12 && hour <= 24){
        hour -= 12;
        t = 'P';
    }
    
    else if(hour == 12){
        t = 'P';
    }

    else if(hour < 12 && hour >= 0){
        t = 'A';
    }

}

void output(int h,int m,char s){
    cout << "the 12 hour notation is: ";

    if(h < 10){
        cout << '0' << h << ":";
    }

    if(h > 10){
        cout << h << ":";
    }

    if(m < 10){
    cout << '0';
    }
    
    cout << m << " " << s << ".M." << endl;
}