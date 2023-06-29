#include <iostream>
using namespace std;
//This program is the updated version of phone_info.cpp of activity 4

struct phone{
	int area_code,exchange,number;
	};
struct names{
	string persons;
	phone data;};
	
int main(){
	names person1[10];
	for(int i=0;i<10;i++){
		cout<<"name: ";
		getline(cin,person1[i].persons);
		cout<<"Area Code: ";
		cin>>person1[i].data.area_code;
		cout<<"The exchange number: ";
		cin>>person1[i].data.exchange;
		cout<<"The number: ";
		cin>>person1[i].data.number;
		cin.ignore();
		}
		
	for (int i=0;i<10;i++){
		cout<<"name: "<<person1[i].persons<<"\narea code: "<<person1[i].data.area_code<<"\nExchange: "<<person1[i].data.exchange<<"\nThe number: "<<person1[i].data.number<<endl;}
	return 0;
}
