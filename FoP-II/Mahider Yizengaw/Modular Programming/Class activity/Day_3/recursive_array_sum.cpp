//this program is designed to print the sum of element of array using recursive function
#include<iostream>

using namespace std;

int sum(int arr[],int a,int );

int main(){
    int arr[5] = {1,2,34,5,6};
    int i;
    cout << "The sum of the number in the array is: " << sum(arr,5,0);
    
    return 0;
}

int sum(int arr[],int a,int i){
   if( i == a){
return 0;
   }
        return arr[i] + sum(arr,a,i + 1);
    }
