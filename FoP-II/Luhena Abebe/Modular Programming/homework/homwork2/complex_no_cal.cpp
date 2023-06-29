#include <iostream>
using namespace std;

struct complex_cal
{
    int x1,x2,z1,z2,y1,y2;
};
complex_cal sum;

void addition(complex_cal(sum));
void differnce(complex_cal(sum));
void multiplication(complex_cal(sum));
void division(complex_cal(sum));

int main()
{
    cout<<"please enter the real part of the first complex number"<<endl;
    cin>>sum.x1;
    cout<<"please enter the imaginary part of the first complex number"<<endl;
    cin>>sum.y1;
    cout<<"please enter the real part of the second complex number"<<endl;
    cin>>sum.x2;
    cout<<"please enter the imaginary part of the first complex number"<<endl;
    cin>>sum.y2;
    char choice;
    cout<<"please enter 'a' for addition,'b' for difference,'c' for product and 'd' for division"<<endl;
    cin>>choice;
    if(choice=='a'){
      addition(complex_cal(sum));
    }
    else if(choice=='c'){
       multiplication(complex_cal(sum));
    }
    else
       division(complex_cal(sum));
return 0;
}

void addition(complex_cal(sum)){
cout<<(sum.x1+sum.x2);
int imaginary=(sum.y1+sum.y2);
if(imaginary>=0){
    cout<<"+";
   }
   cout<<imaginary<<"i";
}
void differnce(complex_cal(sum)){
cout<<(sum.x1-sum.x2);
int imaginary=(sum.y1-sum.y2);
if(imaginary>=0){
    cout<<"+";
   }
   cout<<imaginary<<"i";
}
void multiplication(complex_cal(sum)){
if(sum.y1<0||sum.y2<0){
    cout<<(sum.x1*sum.x2)+(sum.y1*sum.y2);
}
else if(sum.y1<0&&sum.y2<0){
    cout<<(sum.x1*sum.x2)-(sum.y1*sum.y2);
}
else
    cout<<(sum.x1*sum.x2)-(sum.y1*sum.y2);
int imaginary=(sum.x1*sum.y2)+(sum.y1*sum.x2);
if(imaginary>=0){
    cout<<"+";
   }
   cout<<imaginary<<"i";
}
void division(complex_cal(sum)){
    int imaginary;
if(sum.y1>0&&sum.y2>0){
   cout<<(sum.x1*sum.x2)+(sum.y1*sum.y2);
    imaginary=(sum.x2*sum.y1)-(sum.x1*sum.y2);
   if(imaginary>=0){
    cout<<"+";
   }
   cout<<imaginary<<"i";
}
else if(sum.y1<0&&sum.y2>0){
    cout<<(sum.x1*sum.x2)+(sum.y1*sum.y2);
     imaginary=(-1)*(sum.x1*sum.y2)+(sum.x2*sum.y1);
    if(imaginary>=0){
    cout<<"+";
   }
   cout<<imaginary<<"i";
}
else if(sum.y1>0&&sum.y2<0){
    cout<<(sum.x1*sum.x2)+(sum.y1*sum.y2);
     imaginary=(-1)*(sum.x1*sum.y2)+(sum.x2*sum.y1);

if(imaginary>=0){
    cout<<"+";
   }
   cout<<imaginary<<"i";
}
else if(sum.y1<0&&sum.y2<0){
    cout<<(sum.x1*sum.x2)+(sum.y1*sum.y2);
     imaginary=(-1)*(sum.x1*sum.y2)+(sum.y1*sum.x2);
 if(imaginary>=0){
    cout<<"+";
   }
   cout<<imaginary<<"i";
}
cout<<"/"<<(sum.x2*sum.x2)+(sum.y2*sum.y2);
}
