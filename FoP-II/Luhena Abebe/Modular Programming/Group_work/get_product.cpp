//This code is written for the purpose of understanding function declaration, definition and calling a function.
#include <iostream>
using namespace std;
double getproduct(int num1,double num2);

int main()
{   double product,secondnum;
    int firstnum;
    cout<<"Please enter the first number"<<endl;
    cin>>firstnum;
    cout<<"Please enter the second number"<<endl;
    cin>>secondnum;
    product=getproduct(firstnum,secondnum);
    cout <<"The product of the two number is equal to "<<product<< endl;
    return 0;
}

double getproduct(int num1,double num2){
double m=num1*num2;
return m;
}
