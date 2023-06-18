//This code is written for the purpose of understanding pass value by reference.
#include <iostream>
using namespace std;
void swap(int &num1,int &num2,int &num3);

int main()
{   int n1,n2,n3;
    cout<<"please enter the first number"<<endl;
    cin>>n1;
    cout<<"please enter the second number"<<endl;
    cin>>n2;
    cout<<"please enter the third number"<<endl;
    cin>>n3;
    cout<<"the values of parameters before swapping : "<<endl;
    cout<<n1<<" "<<n2<<" "<<n3<<endl;

    swap(n1,n2,n3);
    cout<<"the values of parameters after swapping : "<<endl;
    cout<<n1<<" "<<n2<<" "<<n3;
    return 0;
}

void swap(int &num1,int &num2,int &num3){
 int a;
 if(num2>num3&&num3>num1){
   a=num1;
   num1=num2;
   num2=num3;
   num3=a;
 }
 else if(num3>num2&&num2>num1){
   a=num1;
   num1=num3;
   num3=a;
 }
  else if(num1>num3&&num3>num2){
   a=num2;
   num2=num3;
   num3=a;
 }
 else if(num3>num1&&num2>num1){
   a=num1;
   num1=num3;
   num3=num2;
   num2=a;
 }
 else if(num2>num1&&num1>num3){
   a=num1;
   num1=num2;
   num2=a;
 }
 }
