//This code written for the purpose of understanding function declaration, definition and calling a function.
#include <iostream>
#include <cmath>
using namespace std;
double sum(double num1, double num2);

int main()
{   double num1,num2,answer;
    cout<<"Please enter the first number"<<endl;
    cin>>num1;
    cout<<"Please enter the second number"<<endl;
    cin>>num2;
    answer=sum(num1,num2);
    cout <<answer << endl;
    return 0;
}

double sum(double num1, double num2){
double sum=pow(num1,3)+sqrt(num2);
return sum;
}
