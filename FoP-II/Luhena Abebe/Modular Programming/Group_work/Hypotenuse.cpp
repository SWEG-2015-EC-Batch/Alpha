//This program written for calculating hypotenuse by using the length of other two sides.
#include <iostream>
#include<cmath>
using namespace std;
double hypotenuse(double side1,double side2);

int main()
{    double side1,side2,hypo;
     cout<<"hypotenuse calculation for the given 3 triangles is equal to respectively:"<<endl;//
     cout<<hypotenuse(3.0,4.0)<<endl;
     cout<<hypotenuse(5.0,12.0)<<endl;
     cout<<hypotenuse(8.0,15.0)<<endl;
     char choice;
     cout<<"do you want to calculate for other triangle, if you want, press y and press other key if you don't"<<endl;
     cin>>choice;
     if(choice=='y'){
               cout<<"PLease enter the length of side 1"<<endl;
               cin>>side1;
               cout<<"Please enter the length side 2"<<endl;
               cin>>side2;
               hypo=hypot(side1,side2);
            cout <<"the hypotenuse of the triangle is equal to "<<hypo<< endl;
     }
     else
        cout<<"thank you for using this program!!";
     return 0;
}

double hypotenuse(double side1,double side2){
double H=sqrt(pow(side1,2)+pow(side2,2));
return H;
}
