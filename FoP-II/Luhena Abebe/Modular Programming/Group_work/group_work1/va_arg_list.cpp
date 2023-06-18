//This code written for the understanding of variable length argument list by calling the library cstdarg.
#include <iostream>
#include <cstdarg>
using namespace std;
double product(int num,...);

int main()
{
    cout<<"When the number of argument is equal to 2 The product is equal to "<<product(2,3.0,4.6)<<endl;
    cout<<"When the number of argument is equal to 3 The product is equal to "<<product(3,3.0,4.6,1.2)<<endl;
    cout<<"When the number of argument is equal to 4 The product is equal to "<<product(4,3.0,4.6,4.5,4.6)<<endl;
    return 0;
}

double product(int num,...){
va_list elements;
va_start(elements,num);
double product=1;
for(int i=0;i<num;i++){
    product*=va_arg(elements,double);
}
va_end(elements);
return product;
}
