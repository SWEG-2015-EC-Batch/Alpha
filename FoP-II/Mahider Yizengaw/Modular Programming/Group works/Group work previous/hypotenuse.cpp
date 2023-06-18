//this program is designed to calculate hypotenus of a triangle. 
#include<iostream>
#include<cmath>

using namespace std;

double hypt(double,double);//function declaration

int main(){
    double side1 , side2;

    cout << " Enter the first side length of triangle: ";
    cin >> side1;

    cout << " Enter the second side length of triangle: ";
    cin >> side2;

    cout << " the hypotenuse of the triangle is: " << hypt(side1,side2);

}
//funcion definition
double hypt(double a,double b) {
    double result;

result = sqrt(a*a + b*b);

return result;

}
