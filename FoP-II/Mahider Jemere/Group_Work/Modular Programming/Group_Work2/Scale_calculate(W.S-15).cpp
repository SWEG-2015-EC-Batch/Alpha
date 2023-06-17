#include <iostream>
using namespace std;
//This program scales the inputs given by the user

void scale(double, double&,double&);
int main()
{
    double scaleFactor, firstNum,secondNum;
    cout<<"Please enter a scale factor: ";
    cin>>scaleFactor;
    if(scaleFactor==0){
        cout<<"Please enter a valid scale factor";
        return 0;
    }
    cout<<"Please enter the first number: ";
    cin>>firstNum;
    cout<<"Please enter the second number: ";
    cin>>secondNum;

    scale(scaleFactor,firstNum,secondNum);
    cout<<firstNum<<endl;
    cout<<secondNum;
    return 0;
}

void scale(double factor, double& num1,double& num2){
    cout<<"The values you entered are: "<<endl;
    cout<<num1<<endl;
    cout<<num2<<endl;
    num1=factor*num1;
    num2=factor*num2;
    cout<<"The numbers you entered after being scaled are: "<<endl;
}
