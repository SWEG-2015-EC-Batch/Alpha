//this program is designed to accept array and print the first and last elements and their sum using function
#include<iostream>

using namespace std;

double sum(double arr[],int);//declaring the function

int main(){
    double arr[5];
     cout << sum(arr,5);
    return 0;
}
//defining thefunction 
double sum(double arr[],int size){
    for(int i = 0;i < size;i++){
        cout << "Enter The number for element " <<i+1 << ": ";
        cin >> arr[i];
    }

    cout << "the sum of " << arr[0] << " and " << arr[size-1] <<" is: " ;

    return (arr[0] + arr[size-1]);
}
