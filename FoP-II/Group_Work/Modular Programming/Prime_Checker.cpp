#include <iostream>
#include<cmath>
using namespace std;
//This program checks if a number given by the user is prime or not

bool prime_check(int);
int main()
{
    int num;
    cout<<"Please enter a natural number between 1 and 1000: ";
    cin>>num;


     if(num<1 || num>1000){
    int k=0;
    while(k<3){
    cout<<"Please enter a number between 1 and 1000: ";
    cin>>num;
    if (num>1 || num>1000){
        break;
    }
    if(k==2){
        cout<<"Try again later";
        return 0;
    }
    k=k+1;
    }
     }
    cout<<prime_check(num);
  
    return 0;
}


bool prime_check(int number){

    for(int i=2;i<=sqrt(number);i++){
            if(number%i==0){
                return 0;
            }
        }
    if(number==1){
        cout<<"1 is neither a prime nor a composite"<<endl;
        return 0;
    }
    return true;
}
