#include <iostream>
using namespace std;
double first(double,double);

int main(double,double)
{   int n;
    cout<<"please enter the size of array"<<endl;
    cin>>n;
    double arr[n];
    cout<<"please enter the array element"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<first(arr[0],arr[4]);
    return 0;
}

double first(double j,double f){
double m=j+f;
cout<<j<<" "<<f<<" ";
return m;
}
