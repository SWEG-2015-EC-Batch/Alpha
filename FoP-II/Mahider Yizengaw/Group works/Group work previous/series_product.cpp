#include <iostream> 
#include <cstdarg> 
using namespace std; 
double product(int count, ...) { 
    double result = 1; 
    va_list args; 
    va_start(args, count);

    for (int i = 0; i < count; ++i) { 
        result *= va_arg(args, int);
         } 
         va_end(args); 
         
         return result; 
         } 

         int main() { 
            cout << "Product of 2, 3, 4 is " << product(3, 2, 3, 4) << endl; 
            cout << "Product of 5, 6 is " << product(2, 5, 6) << endl; 
            cout << "Product of 7 is " << product(1, 7) << endl; 
            
            return 0; 
} 
