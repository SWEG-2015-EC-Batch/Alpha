#include <iostream>
#include <cmath>
using namespace std;
//This program uses a function which accepts array  to calculate for a power

void current(double[],int);
void calculate(double[],double[],int);
void display(double[],double[],double[],int);

int main()
{
    double resistance[7]={16,27,39,56,81,2,4};
    current(resistance,7);
    return 0;
}

void current(double resist[], int arr_size){
        double current_arr[arr_size];
        for(int i=0; i<arr_size;i++){
            cout<<"Please enter a current ";
            cin>>current_arr[i];
        }
        calculate(resist,current_arr,arr_size);
}

void calculate(double resist[],double current_arr[],int arr_size){
        double power_arr[arr_size];
        for(int i=0;i<arr_size;i++){
            power_arr[i]=resist[i]*pow(current_arr[i],2);
        }
        display(resist,current_arr,power_arr,arr_size);
}

void display(double resist[],double current_arr[],double power[],int arr_size){

    for(int i=0;i<arr_size;i++){
        cout<<resist[i]<<"  "<<current_arr[i]<<"  "<<power[i]<<endl;
    }

}
