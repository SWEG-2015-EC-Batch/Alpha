#include <iostream>
#include<cmath>
using namespace std;
//The aim of this program is to show the use of function overloading by finding maximum value for different number of arguments
double maxi(double,double);
double maxi(double,double,double);
int main(){
    cout<<maxi(2.3,4.5)<<endl;
    cout<<maxi(2.0,3.2,4.6);
return 0;
}


double maxi(double num1, double num2){
  return max(num1,num2);
}

double maxi(double num1, double num2, double num3){
   if(max(num1,num2)>num3){
    return max(num1,num2);
   }
   else{
    return num3;
   }
}

