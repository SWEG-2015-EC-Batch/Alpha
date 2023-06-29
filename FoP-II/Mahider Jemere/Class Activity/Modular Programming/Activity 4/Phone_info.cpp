#include <iostream>

using namespace std;

//This program accepts and prints out different section of a phone number using structure concept
struct phone{
    int area_code,the_exchange, the_number;
};
int main()
{
    phone phone1 ={234,567,8900},phone2;

    cout<<"Please enter the area code: ";
    cin>>phone2.area_code;
    cout<<"Please enter the exchange: ";
    cin>>phone2.the_exchange;
    cout<<"Please enter the number: ";
    cin>>phone2.the_number;

    cout<<"\nPhone1"<<endl;
    cout<<"Area code: "<<phone1.area_code<<endl;
    cout<<"The exchange code: "<<phone1.the_exchange<<endl;
    cout<<"The number: "<<phone1.the_number<<endl;
    //for phone 2
    cout<<"\nPhone2"<<endl;
    cout<<"Area code: "<<phone2.area_code<<endl;
    cout<<"The exchange code: "<<phone2.the_exchange<<endl;
    cout<<"The number: "<<phone2.the_number<<endl;

    return 0;
}

