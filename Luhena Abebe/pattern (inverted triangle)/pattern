#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n,i,j,l;
    cout<<"This program prints out the shape of inverted right angled triangle using asterisk(*)"<<endl;
    cout<<"Please enter the number of rows(the integers entered must be greater than 1): ";
    cin>>n;
    l=0;
    while(n<=1 && l<3){
        cout<<"please enter valid number";
        cin>>n;
        l+=1;
        if(n<=1 && l>=3){
            exit(0);
        }

    }
    for(i=n; i>=1;i=i-1){
       
        for(j=0;j<i; j++){
           
            cout<<" * ";
        }
        cout<<endl;
    }
    return 0;
}
