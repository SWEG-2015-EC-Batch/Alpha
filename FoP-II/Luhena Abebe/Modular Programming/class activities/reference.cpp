//The program written for understanding passing value by reference.
#include <iostream>
using namespace std;
int calQuotient(double n1, double n2, double &answer);

int main()
{    double k,num1,num2,quotient=10;
     cout<<"Please enter number 1"<<endl;
     cin>>num1;
     cout<<"please enter number 2"<<endl;
     cin>>num2;

    cout<<calQuotient(num1,num2,quotient);
    return 0;
}

int calQuotient(double n1, double n2, double &answer){
answer=n1/n2;
return answer;
}
