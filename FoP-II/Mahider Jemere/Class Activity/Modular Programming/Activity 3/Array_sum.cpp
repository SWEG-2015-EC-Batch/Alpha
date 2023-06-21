#include <iostream>

using namespace std;
//This program  finds the sum of the first and the last element of an array using a function

int sum(int,int);
int main()
{
    int nums[7]={1,2,3,4,5,6,7};

    cout<<"The sum of "<<nums[0]<<" and "<<nums[6]<<" is "<<sum(nums[0],nums[6]);
    return 0;
}

int sum(int first, int last){
    return first + last;
}
