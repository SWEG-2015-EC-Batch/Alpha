#include <iostream>

using namespace std;

int main() {
    char symbol;
    int pattern;

    cout << "Enter a symbol: ";
    cin >> symbol;

    cout << "Choose a pattern:" << endl;
    cout << "1. Square" << endl;
    cout << "2. Triangle" << endl;
    cout << "3. Diamond" << endl;
    cin >> pattern;

    switch(pattern) {
        case 1:
            for(int i = 0; i < 5; i++) {
                for(int j = 0; j < 5; j++) {
                    cout << symbol << " ";
                }
                cout << endl;
            }
            break;
        case 2:
            for(int i = 0; i < 5; i++) {
                for(int j = 0; j <= i; j++) {
                    cout << symbol << " ";
                }
                cout << endl;
            }
            break;
        case 3:
            for(int i = 0; i < 5; i++) {
                for(int j = 0; j < 5-i; j++) {
                    cout << " ";
                }
                for(int k = 0; k <= i; k++) {
                    cout << symbol << " ";
                }
                cout << endl;
            }
            for(int i = 4; i >= 0; i--) {
                for(int j = 0; j < 5-i; j++) {
                    cout << " ";
                }
                for(int k = 0; k <= i; k++) {
                    cout << symbol << " ";
                }
                cout << endl;
            }
            break;
        default:
            cout << "Invalid choice." << endl;
            break;
    }

    return 0;
}
