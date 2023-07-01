#include<iostream>

using namespace std;

struct phonenum{
    int a_code,exchange,num;
    };
    struct name{
        string name;
    };


  int main (){
    int n = 9; 
    phonenum num[n];
    name person[n];
    for(int i = 0;i <= n;i++){
        cout << "Enter name for person " << i + 1 << ": ";
        getline( cin,person[i].name);
        cout << "enter the area code: ";
        cin >> num[i].a_code;

        cout << "enter the exchange number: ";
        cin >> num[i].exchange;

        cout << "enter the phone number: ";
        cin >> num[i].num;
        cin.ignore();
        }
        cout << endl;

        cout << "displaying the information." << endl;
         for(int i = 0;i <= n;i++){
             cout << "for person " << i + 1 << endl;
             cout << "name: " << person[i].name << endl;
             cout << "phone number: (" << num[i].a_code << ") " << num[i].exchange << "-" << num[i].num << endl;
             cout <<endl;
             }
    
    return 0;
}