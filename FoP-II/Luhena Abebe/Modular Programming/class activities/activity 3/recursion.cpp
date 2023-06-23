#include <iostream>
using namespace std;

double sum(double arr[],int i);

int main(){

     double arr[8]={1,2,3,4,4,5,6,5};
    cout<<sum(arr,8);
}
double sum(double arr[],int i){
if(i<0){
    return 0;
}
else
    return arr[i-1]+sum(arr,(i-1));
}
