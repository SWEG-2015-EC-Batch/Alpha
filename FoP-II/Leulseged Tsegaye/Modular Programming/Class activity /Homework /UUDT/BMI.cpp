#include<iostream>
#include<cmath>
using namespace std;

int maxCalculations = 3;

struct Person {
    char name[20], gender;
    float height, weight;
    int age;
};

int calculateTimes() {
    int times;
    cout << "Good sir, how many times do you want to calculate the BMI (max is 3): ";
    cin >> times;
    if (times > maxCalculations) {
        return 0;
    } else {
        return times;
    }
}

void inputData(Person& individual) {
    cout << "Enter your name: ";
    cin.ignore();
    cin.getline(individual.name, 20);
    cout << "Enter your gender: ";
    cin >> individual.gender;
    cout << "Enter your height and weight: ";
    cin >> individual.height >> individual.weight;
    cout << "Enter your age: ";
    cin >> individual.age;
}

int calculateBMI(Person& individual) {
    int bmi = individual.weight / pow(individual.height, 2);
    return bmi;
}

void outputData(Person& individual) {
    int bmi = calculateBMI(individual);
    if (bmi > 18 && bmi < 24) {
        cout << "Your BMI is " << bmi << ", looking good!" << endl;
    } else {
        cout << "Your BMI is " << bmi << ", something is not right, please take care of your health." << endl;
    }
}

int main() {
    Person individual[maxCalculations];
    int numTimes = calculateTimes();
    for (int i = 0; i < numTimes; i++) {
        inputData(individual[i]);
        calculateBMI(individual[i]);
        outputData(individual[i]);
    }
    return 0;
}
