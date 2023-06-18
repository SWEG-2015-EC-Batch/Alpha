#include <iostream>
#include<cstdarg>
using namespace std;
//This program calculates the product of a variable number of argument list

double product(int num,...);
int main()
{
    cout<<product(3,2.3,3.4,5.6)<<endl;
    cout<<product(5,2.0,3.0,4.0,5.0,6.0)<<endl;
    cout<<product(2,2.56,2.35)<<endl;
  
    return 0;
}


double product(int num,...){
    va_list elements;
    va_start(elements,num);
    double product=1;
    for(int i=0;i<num;i++){

        product=product*va_arg(elements,double);
    }

    va_end(elements);
    return product;
}
