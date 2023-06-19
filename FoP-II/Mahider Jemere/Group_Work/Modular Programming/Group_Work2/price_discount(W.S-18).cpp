#include <iostream>
#include <cassert>
using namespace std;
//This program outputs the price of an item after a discount is applied
double newPrice(double&,double,bool);
int main()
{
    double price,discount;
    bool checker;
    cout<<"Please enter the price: ";
    cin>>price;
    cout<<"Please enter the discount: ";
    cin>>discount;
    assert (discount>0);
    

    cout<<"The discount is in percent(choose the answer below)"<<endl;
    cout<<"0. false"<<endl;
    cout<<"1. true"<<endl;
    cin>>checker;

    assert (newPrice(price,discount,checker)>0);
      cout<<"The price of the item after the discount is "<<price;
       
    
        

    return 0;
}


double newPrice(double& the_price, double the_discount,bool checker){
        if(checker==true){
            the_price=the_price-((the_discount/100)*the_price);
        }
        else{
            the_price=the_price-the_discount;
        }

        return the_price;
}
