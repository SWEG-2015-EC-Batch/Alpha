#include<iostream>

using namespace std;

void calcquotient(double n1,double n2, double *answer);

int main(){
    double num1 = 8;
    double num2 = 2;
    double quotient;

    calcquotient(num1,num2,&quotient);

    cout << "the quotient is: " << quotient;

    return 0;
}

 void calcquotient(double n1,double n2,double *answer){
   *answer = n1/n2;     
    }
