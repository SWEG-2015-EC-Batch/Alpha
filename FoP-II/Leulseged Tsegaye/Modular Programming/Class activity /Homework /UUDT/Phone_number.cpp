#include<iostream>
using namespace std;
int maxEntries = 3;

struct Phone {

    int areaCode;
    int exchange;
    int number;
};

int getNumEntries() {
    int entries;
    cout << "Good sir, how many phone numbers would you like to enter (max is 3): ";
    cin >> entries;
    if (entries > maxEntries) {
        return 0;
    } else {
        return entries;
    }
}

void inputPhoneNumber(Phone& phone) {
    cout << "Enter the area code: ";
    cin >> phone.areaCode;
    cout << "Enter the exchange code: ";
    cin >> phone.exchange;
    cout << "Enter the number: ";
    cin >> phone.number;
}

void displayPhoneNumber(Phone& phone) {
    cout << "The phone number is: (" << phone.areaCode << ") " << phone.exchange << "-" << phone.number << endl;
}

int main() {
    Phone phone[maxEntries];
    int numEntries = getNumEntries();
    for (int i = 0; i < numEntries; i++) {
        inputPhoneNumber(phone[i]);
        displayPhoneNumber(phone[i]);
    }
    return 0;
}
