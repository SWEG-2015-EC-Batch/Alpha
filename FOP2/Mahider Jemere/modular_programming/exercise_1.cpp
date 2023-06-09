//The aim of the program is to show function declaration and definition
#include <iostream>
using namespace std;
//A function based program that accepts user's name and prints a welcome message including his/her name
void name();
int main() {
 name();
 return 0;
}
void name(){
 string username;
 cout<<"Hello, please enter your name:  ";
 getline(cin,username);
 cout<<"Welcome to modular programming, "<<username<<".";
}
