//this code is written for the purpose of calculating product of the two number which their data type is float.
#include <iostream>
using namespace std;
void mult(float , float );
int main()
{   float num1,num2;
     cout<<" please enter the first number"<<endl;
     cin>>num1;
     cout<<" please enter the second number"<<endl;
     cin>>num2;
     mult(num1,num2);
    return 0;
}
void mult(float num1,float num2){
cout<<"The product of the two number is "<<num1*num2<<endl;
}
