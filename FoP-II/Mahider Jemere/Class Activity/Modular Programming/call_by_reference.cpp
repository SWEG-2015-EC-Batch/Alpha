#include <iostream>
using namespace std;
//This program uses passing by reference in order to calculate the quotient of two double numbers

void calcQuotient(double,double,double&);
int main()
{
    double num1,num2,quotiient;
    cout<<"Please enter the first number: ";
    cin>>num1;
    cout<<"Please enter the second number: ";
    cin>>num2;

    calcQuotient(num1,num2,quotiient);
    cout<<"The quotient is "<<quotiient;
    return 0;
}

void calcQuotient(double n1,double n2, double& answer){
    answer=n1/n2;
}
