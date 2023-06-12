#include <iostream>
using namespace std;
//This program calculates the product of one integer and one double number

double getproduct(int, double);

int main()
{
    int firstNum;
    double secondNum;
  
    cout<<"Please enter the first number: ";
    cin>>firstNum;
    cout<<"Please enter the second number: ";
    cin>>secondNum;
    cout<<"The product of "<<firstNum<<" and "<<secondNum<<" is "<<getproduct(firstNum,secondNum);
  
    return 0;
}


double getproduct(int num1, double num2){

    return num1*num2;
}

