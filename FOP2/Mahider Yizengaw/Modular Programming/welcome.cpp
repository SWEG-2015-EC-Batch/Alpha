#include<iostream>
using namespace std;

 void greeting();

int main(){
 greeting();
 return 0;   
}
void greeting(){
     string name;
    cout << "please enter your name" << endl;
    getline(cin,name);
    cout << "hello " << name << endl;
    cout << "welcome to m.p!!";
}
