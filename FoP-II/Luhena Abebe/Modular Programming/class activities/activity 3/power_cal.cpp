#include <iostream>
#include <cmath>
using namespace std;
double input(double resist[],int j);
double cal(double resist[],double curr[],int j);
double display(double resist[],double current[],double power[],int j);
int main()
{
    double resistance[5]={16.0,27.0,39.0,56.0,81.0};
    input(resistance,5);

    return 0;
}
double input(double resist[],int j){
    double current[j];
    cout<<"please enter current"<<endl;
for(int i=0;i<j;i++){
    cin>>current[i];
}
cal(resist,current,j);
}

double cal(double resist[],double curr[],int j){
    double power[j];
for(int i=0;i<j;i++){
    power[i]=resist[i]*pow(curr[i],2);
} display(resist,curr,power,j);
}

double display(double resist[],double current[],double power[],int j){
for(int i=0;i<j;i++){
    cout<<"power "<<power[i]<<" "<<"resistance "<<resist[i]<<" "<<"current "<<current[i]<<endl;
}
}
