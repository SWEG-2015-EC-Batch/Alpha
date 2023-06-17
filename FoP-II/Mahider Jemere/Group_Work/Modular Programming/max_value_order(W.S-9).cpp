
#include <iostream>
using namespace std;
//This program orders the given values by the user from the greatest to the least
//The aim of the program is to show the use of passing by reference

void swapValue(int&,int&,int&);
int main()
{
    int firstNum,secondNum,thirdNum;
    cout<<"Please enter the first number: ";
    cin>>firstNum;
    cout<<"Please enter the second number: ";
    cin>>secondNum;
    cout<<"Please enter the third number: ";
    cin>>thirdNum;

    cout<<"The entered numbers before being swapped: "<<endl;
    cout<<firstNum<<endl;
    cout<<secondNum<<endl;
    cout<<thirdNum<<endl;

    swapValue(firstNum,secondNum,thirdNum);

    cout<<"The entered numbers after being ordered from the largest to the least: "<<endl;
    cout<<firstNum<<endl;
    cout<<secondNum<<endl;
    cout<<thirdNum<<endl;

    return 0;
}

void swapValue(int& num1,int& num2,int& num3){
    int temp;//temporary variable which helps to swap variables
    if(num2>num3 && num3>num1){
        temp=num1;
        num1=num2;
        num2=num3;
        num3=temp;
    }
    else if(num3>num2 && num2>num1){
        temp=num1;
        num1=num3;
        num3=temp;
    }
    else if(num1>num3 && num3>num2){
        temp=num2;
        num2=num3;
        num3=temp;

    }
    else if(num3>num1 && num2>num2){
        temp =num1;
        num1=num3;
        num3=num2;
        num2=temp;

    }
    else if(num2>num1 && num1>num3){
        temp=num1;
        num1=num2;
        num2=temp;
    }
}
