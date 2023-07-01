//this program uses structure to represent complex number and different functions to add,substract,multiply and divide two complex number.
#include<iostream>

using namespace std;
//declaring structure to complex number
struct complex{
    double real;
    double imag;
};
//function declaration for computing two complex number
complex add(complex,complex);
complex subtrc(complex,complex);
complex mult(complex,complex);
complex divide(complex,complex);

int main(){
    complex num1;//complex number 1
    num1.real = -2;
    num1.imag = 4;

    complex num2;//complex number 2
    num2.real = 6;
    num2.imag = 2;

    complex result;//complex number that store the result after computing
    result = add(num1,num2);
    cout << "(" << num1.real << " + " << num1.imag << "i) - ("<< num2.real << " + " << num2.imag << "i) = " << result.real << " + " << result.imag << "i" << endl;

    result = subtrc(num1,num2);
    cout << "(" << num1.real << " + " << num1.imag << "i) - ("<< num2.real << " + " << num2.imag << "i) = " << result.real << " + " << result.imag << "i" << endl;
    
    result = mult(num1,num2);
    cout << "(" << num1.real << " + " << num1.imag << "i) * ("<< num2.real << " + " << num2.imag << "i) = " << result.real << " + " << result.imag << "i" << endl;
    
    result = divide(num1,num2);
    cout << "(" << num1.real << " + " << num1.imag << "i) / ("<< num2.real << " + " << num2.imag << "i) = " << result.real << " + " << result.imag << "i" << endl;
    
    return 0; 
}
//functions definition
complex add(complex a,complex b){
    complex result;
    result.real = a.real + b.real;
    result.imag = a.imag + b.imag;
    return result;
}

complex subtrc(complex a,complex b){
   complex result;
    result.real = a.real - b.real;
    result.imag = a.imag - b.imag;
    return result; 
}

complex mult(complex a,complex b){
    complex result;
    result.real = a.real * b.real - a.imag * b.imag;
    result.imag = a.real * b.imag + a.imag * b.real;
    return result;
}

complex divide(complex a,complex b){
    double denominator;
    denominator = b.real * b.real + b.imag * b.imag;
    complex result;
    result.real = (a.real * b.real + a.imag * b.imag)/denominator;
    result.imag = (b.real * a.imag - b.imag * a.real)/denominator;
    return result; 
}