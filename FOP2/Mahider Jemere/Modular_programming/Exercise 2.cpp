#include <iostream>
using namespace std;
//This finds the product of two floating numbers and displays the result using a function named mult.
void mult(float,float);
int main(){
    float num1,num2;
    cout<<"Please enter the first number: ";
    cin>>num1;
    cout<<"Please enter the second number: ";
    cin>>num2;
    mult(num1,num2);

    return 0;
}
void mult(float first_num,float second_num){
    cout<<"The Product of "<<first_num<<" and "<<second_num<<" is "<<first_num*second_num;
}


