#include <iostream>
#include <fstream>
#include<string.h>
using namespace std;

int main(){
 fstream getme;
 getme.open("bank_acc.txt",ios::out | ios::in);
 if(!getme.is_open()){
    cout<<"Couldn't open the file";
    return 0;
 }


 string inp_acc, file_acc;
 cout<<"Please enter the bank account number ";
 cin>>inp_acc;
 while(!getme.eof()){
 getme>>file_acc;
 if(inp_acc==file_acc){
        cout<<"Name:";
        getme>>file_acc;
        cout<<file_acc;
        getme>>file_acc;
        cout<<" "<<file_acc<<endl;
        cout<<"Balance:";
        getme>>file_acc;
        cout<<" "<<file_acc;
        return 0;
 }}
return 0;
 }
