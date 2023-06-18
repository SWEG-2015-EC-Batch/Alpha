#include <iostream>
using namespace std;
void input(int &choice,int &input3,double &ft,double &inches,double &metre,double &cm);
void calculation(int &choice,int &input3,double &ft,double &inches,double &metre,double &cm);
void output(int &choice,int &input3,double &ft,double &inches,double &metre,double &cm);

int main()
{    cout<<"This code is written for the conversion of length in ft and inches to meter and centimeter and vice versa"<<endl;
     char input1;
     do{
     int ch,in;
     double fte,inche,metr,cme;
      input(ch,in,fte,inche,metr,cme);
      calculation(ch,in,fte,inche,metr,cme);
      output(ch,in,fte,inche,metr,cme);
      cout<<"please enter any key if you want to continue or 'y' to exit"<<endl;
      cin>>input1;}while(input1!='y');
}

void input(int &choice,int &input3, double &ft,double &inches,double &metre,double &cm){
cout<<"Please enter the number '1' for the conversion of length in ft and inches to meter and centimeter or choice'2' for the vice versa"<<endl;
cin>>choice;

cout<<"please enter input this is for the conversion of feet and inches to meter and cm"<<endl;
cin>>input3;
if(choice==1){
    if(input3==1){
       cout<<"please enter the length in ft"<<endl;
    cin>>ft;
    }
    if(input3==2){
     cout<<"please enter the length in inches"<<endl;
    cin>>inches;
    }

}
if(choice==2){
    if(input3==1){
       cout<<"please enter the length in meter"<<endl;
    cin>>metre;
    }
    if(input3==2){
     cout<<"please enter the length in centimeter"<<endl;
    cin>>cm;
    }
}
}
void calculation(int &choice,int &input3,double &ft,double &inches,double &metre,double &cm){
if(choice==1){
        if(input3==1){
          metre=ft/3.28084;
          cm=ft/0.0328;
        }
      if(input3==2){
          metre=inches/39.37;
          cm=inches*2.54;
        }
}
if(choice==2){
    if(input3==1){
          ft=metre*3.28084;
          inches=metre*39.37;
        }
      if(input3==2){
          ft=cm*0.0328;
          inches=cm/2.54;
        }
}
}
void output(int &choice,int &input3,double &ft,double &inches,double &metre,double &cm){
if(choice==1){
        if(input3==1){
    cout<<"The converted values length in feet to: "<<metre<<" meter"<<"  "<<cm<<" centimeter"<<endl;}
    if(input3==2){
    cout<<"The converted values length in inches to: "<<metre<<" meter"<<"  "<<cm<<" centimeter"<<endl;}

}
if(choice==2){
        if(input3==1){
    cout<<"The converted values length in meter to: "<<ft<<" feet"<<"  "<<inches<<" inches"<<endl;}
    if(input3==2){
    cout<<"The converted values in cm to: "<<ft<<" feet"<<"  "<<inches<<" inches"<<endl;}
}
}
