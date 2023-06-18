//this program is designed to return the sum of sequare root and cube of two numbers
#include<iostream>
#include<cmath>

using namespace std;

double add(double,double);//function declaration

int main() {
    double firstNum;
    double secondNum;

    cout << "Enter first number: ";
     cin >> firstNum;

    cout << "Enter second number: ";
     cin >> secondNum;
    
    cout << "The sum of cube of " << firstNum << " and " << "squere root of " << secondNum << " is: ";
    cout << add(firstNum, secondNum); //function calling

    return 0;
}

//function definition
double add(double num1,double num2) {
    double result;

    result = pow(num1,3) + sqrt(num2); 

    return result;
}

