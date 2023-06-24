//this program is designed to show function overload. both functions print the maximum number.
#include<iostream>

using namespace std;

//function declaration
double max(double , double);
double max(double , double,double);

int main(){
   cout << max(4.98,5.4) << endl;
   cout << max(3.44,4.56,7.4);
return 0;
}

double max(double a , double b){
    double max;
    if(a < b){
    max = b;
    }
    else {
        max = a;
    }
    return max;
}

//function definition
double max(double a, double b, double c){
    double max;
    
    if(a < b && b > c){
    max = b;
    }
    else if(a > b && c < a) {
        max = a;
    }
    else {
        max = c;
    }

    return max;
}
