#include <iostream>
#include <fstream>
#include <string.h>
#include <iomanip>
using namespace std;
struct bank_info{
char f_name[10],l_name[15];
double balance;
int account_no;
};
int main()
{   bank_info bank[5];
    /*ofstream fout;
    fout.open("my file.txt",ios::out);
    for(int i=0;i<5;i++){
    cout<<"please enter first name"<<endl;
    cin>>bank[i].f_name;
    if(strlen(bank[i].f_name)>10){
        exit(0);
    }
    cout<<"please enter last name"<<endl;
    cin>>bank[i].l_name;
    if(strlen(bank[i].l_name)>15){
        exit(0);
    }
    cout<<"please account number"<<endl;
    cin>>bank[i].account_no;
    if(bank[i].account_no<1000){
        exit(0);
    }
    cout<<"please balance"<<endl;
    cin>>bank[i].balance;
    cin.ignore();
    }
if(fout.is_open()){
      for(int i=0;i<5;i++){
        fout<<fixed<<setprecision(2)<<bank[i].f_name<<"\t"<<bank[i].l_name<<"\t"<<bank[i].account_no<<"\t"<<bank[i].balance;
    }
    fout.close();
    }*/
    ifstream fin;
    fin.open("my file.txt",ios::in);
    if(fin.is_open()){
      int account;
    cout<<"please enter the account you want to search"<<endl;
    cin>>account;
         for(int i=0;i<5;i++){
        fin>>bank[i].f_name;
        fin>>bank[i].l_name;
        fin>>bank[i].account_no;
        fin>>bank[i].balance;
    if(account==bank[i].account_no){
    cout<<bank[i].f_name<<"  "<<bank[i].l_name<<" "<<bank[i].balance;
}
    }

fin.close();
    }

}
