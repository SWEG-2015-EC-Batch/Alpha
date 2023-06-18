//this code perform calculation for the applicability of discount on a given price.
#include <iostream>
#include <cassert>
using namespace std;
double discounted(double &price,double discount,bool m);

int main()
{
    double price,discount;
    bool m;
    cout<<"this code perform calculation for the applicability of discount on a given price"<<endl;
    cout<<"please enter '1' for fixed amount of discount and '0' for percentage"<<endl;
    cin>>m;
    cout<<"please enter amount of price"<<endl;
    cin>>price;
    cout<<"please enter discount"<<endl;
    cin>>discount;
    cout<<"the discount is applicable the amount of discounted price : "<<discounted(price,discount,m)<<" "<<"$";
    return 0;
}

double discounted(double &price,double discount,bool m){
    assert (discount>=0);
if(m==true){
price=price-discount;
assert (price!=0);
return price;
}
if(m==false){
price=price-((price*discount)/100);
assert (price!=0);
return price;
}
}
