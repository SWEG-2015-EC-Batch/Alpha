#include <iostream>
using namespace std;


void getInput(double& feet, double& inches) {
    cout << "Enter length in feet and inches : ";
    cin >> feet >> inches;
}


void calc(double feet, double inches, double& meters, double& centimeters) {
    double totalInches = (feet * 12) + inches;
    double totalMeters = totalInches * 0.0254;
    meters = int(totalMeters);
    centimeters = (totalMeters - meters) * 100;
}



void displayOutput(double feet, double inches, double meters, double centimeters) {
    cout << feet << " feet and " << inches << " inches is equivalent to "
         << meters << " meters and " << centimeters << " centimeters." << endl;
}

int main() {
    char choice;
    do {
        double feet, inches, meters, centimeters;
        getInput(feet, inches);
        calc(feet, inches, meters, centimeters);
        displayOutput(feet, inches, meters, centimeters);
        cout << "Do you want to convert another length? (y/n): ";
        cin >> choice;
    } while (choice == 'y');
    return 0;
}
