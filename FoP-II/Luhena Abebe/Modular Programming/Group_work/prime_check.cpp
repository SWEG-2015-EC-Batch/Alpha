#include <iostream>
#include <cmath>
using namespace std;
bool prime(int j);

int main()
{   cout<<"this code is work for the number between 1 and 1000 so, please enter the correct number"<<endl;
    int j;
    cout<<"please enter the number"<<endl;
    cin>>j;
    if(j<1||j>1000){
        int i=0;
     while(i<2){
    cout<<"Please try again the number you entered is not between 1 and 1000"<<endl;
    cin>>j;
    if(j>1&&j<1000){
       break;
    }
    if(i==2){
        cout<<"try again"<<endl;
        exit(0);
    }
i+=1;}
}
    if(prime(j)==1){
        cout<<"the number you entered is prime"<<endl;
    }
    else
        cout<<"the number you entered is not prime or composite"<<endl;

    return 0;
}

bool prime(int j){
for(int i=2;i<=sqrt(j);i++){
    if(j%i==0){
        return 0;
    }
    }
    return true;
}


