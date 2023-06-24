#include <iostream>
#include <cassert>

using namespace std;

void calculateDiscount(double &price, double discount, bool isPercentage) {
    assert(discount >= 0);

    double discountAmount = isPercentage ? price * discount / 100 : discount;
    double newPrice = price - discountAmount;

    assert(newPrice > 0); 

    price = newPrice;
}

int main() {
    double price = 100;
    double discount = 20;
    bool isPercentage = true;

    calculateDiscount(price, discount, isPercentage);

    cout << "New price after discount: " << price << endl;

    return 0;
}
