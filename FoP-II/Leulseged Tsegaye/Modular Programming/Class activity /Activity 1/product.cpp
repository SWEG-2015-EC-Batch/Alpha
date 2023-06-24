//this program is function based which print the product of two numbers
#include <iostream>

using namespace std;

void mult(float a,float b);

int main() {
    float num1,num2;

    cout << "please enter 1st number" << endl;
    cin >> num1;

    cout << "please enter 2nd number" << endl;
    cin >> num2;

    cout << "the product of " << num1 << " and " << num2 << " is: ";

    mult(num1,num2);

    return 0;
}

void mult(float a, float b) {

   cout << a*b;

}
