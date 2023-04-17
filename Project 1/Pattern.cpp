#include<iostream>

using namespace std;



int main() {
    int n;
    cout << "Enter a positive integer n: ";
    cin >> n;
    if(n<=0){
     return 0;}
    for (int i = n; i >= 0; i--) {
        for (int j = 0; j < n - i; j++) {
            cout << "  ";
        }
        for (int j = 0; j <= i; j++) {
            cout << j << " ";
        }
        for (int j = i - 1; j >= 0; j--) {
            cout << j << " ";
        }
        cout << endl;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < n - i; j++) {
            cout << "  ";
        }
        for (int j = 0; j <= i; j++) {
            cout << j << " ";
        }
        for (int j = i - 1; j >= 0; j--) {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}
