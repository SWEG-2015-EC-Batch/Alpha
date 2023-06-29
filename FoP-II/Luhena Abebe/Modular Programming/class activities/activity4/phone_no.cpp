#include <iostream>
using namespace std;
 struct phone
 {
     int area_code,the_exchange,number;
 };
 struct phone ph1={212,767,8900};
 struct phone ph2;
int main()
{
    cout<<ph1.area_code<<" "<<ph1.the_exchange<<" "<<ph1.number<<endl;
    cout<<"enter area code"<<endl;
    cin>>ph2.area_code;
    cout<<"enter the exchange"<<endl;
    cin>>ph2.the_exchange;
    cout<<"enter number"<<endl;
    cin>>ph2.number;
    cout<<"("<<ph2.area_code<<")"<<" "<<ph2.the_exchange<<"-"<<ph2.number;
    return 0;
}
