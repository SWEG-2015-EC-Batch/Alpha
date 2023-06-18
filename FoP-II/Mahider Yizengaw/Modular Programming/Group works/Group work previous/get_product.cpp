#include<iostream>

using namespace std;

double getproduct(int num1,double num2); //function declaration

int main() {
    int firstNum;
    double secondNum;

    cout << "Enter first number: ";
     cin >> firstNum;

    cout << "Enter second number: ";
     cin >> secondNum;
    
    cout << "The producrt of " << firstNum << " and " << secondNum << " is: ";
    cout << getproduct(firstNum, secondNum); //function calling
return 0;
}

//function definition
double getproduct(int num1,double num2) {

    return (num1 * num2);
}
