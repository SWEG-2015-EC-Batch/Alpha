#include<iostream>
#include<string>
using namespace std;

int maxCalculations = 3;

struct Student {
    char id[20];
    char name[20];
    int testMark;
    int finalMark;
};

int getNumCalculations() {
    int calculations;
    cout << "Greetings! How many times would you like to calculate the grade (max is 3): ";
    cin >> calculations;
    if (calculations > maxCalculations) {
        return 0;
    } else {
        return calculations;
    }
}

void inputStudentData(Student& student) {
    cout << "Enter your name: ";
    cin.ignore();
    cin.getline(student.name, 20);
    cout << "Enter your ID: ";
    cin.getline(student.id, 20);
    cout << "Enter your test result: ";
    cin >> student.testMark;
    cout << "Enter your final exam result: ";
    cin >> student.finalMark;
}

void calculateResult(Student& student) {
    int totalMark = student.testMark + student.finalMark;
    cout << "Good, " << student.name << ", your total mark is: " << totalMark << endl;
}

int main() {
    Student student[maxCalculations];
    int numCalculations = getNumCalculations();
    for (int i = 0; i < numCalculations; i++) {
        inputStudentData(student[i]);
        calculateResult(student[i]);
    }
    return 0;
}
