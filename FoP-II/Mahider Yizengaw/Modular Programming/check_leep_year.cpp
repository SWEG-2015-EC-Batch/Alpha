// this program check the given year whether leep year or not 
#include<iostream>

using namespace std;

int leep();

int main() {
    cout << leep();
}

int leep() {
    int no_year;
    cout << "enter the year" << endl;
    cin >> no_year;

    if((no_year % 4 == 0 && no_year % 100 != 0 ) || no_year % 400 == 0)
    {
return 1;
    }
    else{
        return 0;
    }
    
    return 0;
}
