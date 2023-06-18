#include<iostream>

using namespace std;

double cal_discount(double &price,double &discount,bool check);

int main(){
    double price,discount;
    bool isfixed;

    cout << "Enter the price of an item: ";
    cin >> price;
    cout << "in which of the following do you want to calculate the discount?\n";
    cout << "o. as percentage\n1. as fixed amount\n";
    cin >> isfixed;
    if(isfixed == 0){
        cout << "please enter percentage of discount(%): ";
        cin >> discount;
    }
    else {
     cout << "please enter fixed amount of discount: ";
     cin >> discount;   
    }
    
    cout << "discount price is: " << cal_discount(price,discount,isfixed);
 return 0;
}

double cal_discount(double &price,double &discount,bool check){
    double d_price;
    if(check == 0){
        if(discount < 0){
      cout << "percentage cannot be negative.";
        exit(0);
        }
            d_price = price - (price*discount/100);
    }
     else{
        if(discount < 0){
            cout << "fixed amount of discount cannot be negative.";
            exit(0);
        }
            d_price = price - discount; 
    }
     if(d_price <= 0){
            cout << "discounted price cannot zero or negative.";
            exit(0);
        }
        else {
            return d_price;
            
        }
}
