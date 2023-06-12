#include <iostream>
#include<cmath>
using namespace std;
//This program calculates the sum of a cube of one number and square root of another number

double product(double,double);
int main()
{
    double firstNum,secondNum;
    cout<<"Please enter the first number: ";
    cin>>firstNum;
    cout<<"Please enter the second number: ";
    cin>>secondNum;
  
    cout<<"The sum of the cube of " <<firstNum<<" and the square root of "<<secondNum<<" is "<<product(firstNum,secondNum);
  
    return 0;
}


double product(double num1, double num2){
    double answer = pow(num1,3)+sqrt(num2);
    return answer;
}
