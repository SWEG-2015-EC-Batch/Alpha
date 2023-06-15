#include <iostream>
#include<cmath>
using namespace std;
//This program calculates the hypotenuse of a triangle with reading the length of two sides

double hypotenuse(double,double);
int main()
{
   cout<< hypotenuse(3,4);
   cout<<" Or using the hypot method: "<<hypot(3,4)<<endl;
   cout<<hypotenuse(5,12);
   cout<<" Or using the hypot method: "<<hypot(5,12)<<endl;
   cout<<hypotenuse(8,15);
   cout<<" Or using the hypot method: "<<hypot(8,15)<<endl;
  
    return 0;
}


double hypotenuse(double side1,double side2){
    double result = sqrt(pow(side1,2)+pow(side2,2));
    cout<<"The length of the hypotenuse with side length of "<<side1<<" and "<<side2<<" is ";
    return result;
}
