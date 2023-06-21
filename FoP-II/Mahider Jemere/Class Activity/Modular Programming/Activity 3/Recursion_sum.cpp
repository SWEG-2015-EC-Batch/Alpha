#include <iostream>
#include<cassert>
using namespace std;
//This program finds the sum of numbers in an array using recursive function

double recurse(double[],int);
int main()
{
    double sum[4]={1,2,3,4};
    cout<<recurse(sum,5);
    return 0;
}

double recurse(double sum[],int size_arr){
    if(size_arr<0){
        return 0;
    }

    return sum[size_arr-1] + recurse(sum,size_arr-1);
}
