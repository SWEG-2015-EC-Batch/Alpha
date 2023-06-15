//This code is written for the purpose of understanding default argument.
#include <iostream>
using namespace std;
int fibonacci(int=5);

int main()
{   cout<<"the function called without parameter/ by default"<<endl;
    fibonacci();
    cout<<endl;
    cout<<"the function called with parameter"<<endl;
    fibonacci(5);
return 0;
}

int fibonacci(int j){
int a=0;
int d=0;
int b=1;
for(int i=1;i<=j;i++){
      d=a+b;
      b=a;
      a=d;
cout<<d<<endl;;
}
return 0;
}
