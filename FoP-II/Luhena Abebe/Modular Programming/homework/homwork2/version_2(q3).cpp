//This code is written for the purpose of understanding how nested structure works.
#include <iostream>
using namespace std;
struct phone
 {
     int area_code,the_exchange,number;
 };
struct person_name
{
phone data;
string p_name;
};
int main()
{
    person_name ph1[10];
    for(int i=0;i<10;i++){
    cout<<"please enter your name"<<endl;
    getline(cin,ph1[i].p_name);
    cout<<"please enter area code"<<endl;
    cin>>ph1[i].data.area_code;
    cout<<"please enter the exchange"<<endl;
    cin>>ph1[i].data.the_exchange;
    cout<<"please enter number"<<endl;
    cin>>ph1[i].data.number;
    cin.ignore();
    }
    for(int i=0;i<10;i++){
    cout<<ph1[i].p_name<<" "<<"("<<ph1[i].data.area_code<<")"<<" "<<ph1[i].data.the_exchange<<"-"<<ph1[i].data.number<<endl;
    }
    return 0;
}
