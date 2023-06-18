//this program shows void function that takes three int argument by referance 
//and swap the value using another function inorder to arrange the value in decreasing order
#include <iostream>

using namespace std;

void swapvalue(int &num1,int &num2);
void swapfun(int& a,int& b,int& c);

int main(){

    int n1,n2,n3;

    cout << "enter 1st number: ";
    cin >> n1;

    cout << "enter 2nd number: ";
    cin >> n2;

    cout << "enter 3rd number: ";
    cin >> n3;
    swapfun(n1,n2,n3);
    

return 0;
}
void swapvalue(int &num1,int &num2){
    int val;
    val = num1;
    num1 = num2;
    num2 = val;
}
void swapfun(int& num1,int& num2,int& num3){

cout << "before swapping: " << num1 << " " << num2 << " " << num3 << endl;

    if(num1 < num2){
        swapvalue(num1,num2);
    }

    if(num1 < num3){
        swapvalue(num1,num3);
    }

    if(num2 < num3 ){
        swapvalue(num2,num3);
    }

  cout << "after swapping: " << num1 << " " << num2 << " " << num3;
}
      
