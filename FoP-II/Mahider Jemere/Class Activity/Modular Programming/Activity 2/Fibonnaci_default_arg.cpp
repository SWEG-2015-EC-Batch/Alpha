#include <iostream>
using namespace std;
//This program shows the use of default argument in finding a fibonnaci series
int fibonacci(int=5);
int main()
{


    fibonacci(8);
    cout<<endl;
    fibonacci();

    return 0;
}

int fibonacci(int num){

    int a=0;
    int b=1;
    int d=0;

    for (int i=0;i<num;i++){
            d=a+b;
            b=a;
            a=d;
            cout<<d<<endl;
    }
    return 0;
}

