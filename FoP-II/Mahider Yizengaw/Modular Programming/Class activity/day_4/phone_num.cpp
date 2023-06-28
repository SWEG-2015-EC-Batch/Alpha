//this program uses structure to store three part of a phone number,the area code ,the exchange
// and the number and print these together 
#include<iostream>

using namespace std;

struct phonenum{
    int a_code,exchange,num;
    };phonenum p1 = {123,546,8769};

  int main (){ 
    phonenum p2; 
    cout << "enter the area code: ";
    cin >> p2.a_code;

    cout << "enter the exchange number: ";
    cin >> p2.exchange;

    cout << "enter the phone number: ";
    cin >> p2.num;

    cout << "the first phone number is: (" << p1.a_code << ") " << p1.exchange << "-"  << p1.num << endl;
    cout << "the second phone number is: (" << p2.a_code << ") " << p2.exchange << "-" << p2.num << endl;
    
    return 0;
}