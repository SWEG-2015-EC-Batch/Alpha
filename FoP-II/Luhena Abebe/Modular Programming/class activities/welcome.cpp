//This programme written for the purpose of function declaration and definition.
#include <iostream>
#include <string.h>
using namespace std;
void welcome();

int main()
{
    welcome();
    return 0;
}

void welcome(){
string name;
cout<<"please enter your name"<<endl;
getline(cin,name);
cout<<"hello "<<name<<" welcome to modular programming";
}
