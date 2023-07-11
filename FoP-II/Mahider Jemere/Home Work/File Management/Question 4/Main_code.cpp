#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Employee {
    int id;
    char sex;
    double hourlyWage;
    int yearsWithCompany;
};

void storeEmployeeRecords(const string& filename) {
    ofstream file(filename);
    if (!file.is_open()) {
        cout << "Couldn't open the file" << endl;
        return;
    }

    Employee employees[10];

    cout << "Enter information for 10 employees:" << endl;
    for (int i = 0; i < 10; i++) {
        Employee emp;

        cout << "Employee " << i + 1 << ":" << endl;
        cout << "ID No.: ";
        cin >> emp.id;
        cout << "Sex(M/F): ";
        cin >> emp.sex;
        cout << "Hourly Wage: ";
        cin >> emp.hourlyWage;
        cout << "Years with the Company: ";
        cin >> emp.yearsWithCompany;

        employees[i] = emp;
    }

    // Sort the employees based on ID number using bubble sort algorithm
    for (int i = 0; i < 10 - 1; i++) {
        for (int j = 0; j < 10 - i - 1; j++) {
            if (employees[j].id > employees[j + 1].id) {
                Employee temp = employees[j];
                employees[j] = employees[j + 1];
                employees[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < 10; i++) {
        file << employees[i].id << " " << employees[i].sex << " " << employees[i].hourlyWage << " " << employees[i].yearsWithCompany << endl;
    }

    file.close();
}

void calculateTotalPay(const string& filename) {
    ifstream file(filename);
    if (!file.is_open()) {
        cout << "Couldn't open the file" << endl;
        return;
    }

    double hoursWorked;

    cout << "Enter the number of hours worked for each employee:" << endl;

    while (true) {
        Employee emp;
        file >> emp.id >> emp.sex >> emp.hourlyWage >> emp.yearsWithCompany;

        if (file.eof())
            break;

        cout << "Employee ID: " << emp.id << endl;
        cout << "Number of hours worked: ";
        cin >> hoursWorked;

        double totalPay = hoursWorked * emp.hourlyWage;
        cout << "Total pay for the month: $" << totalPay << endl;
    }

    file.close();
}

void updateEmployeeData(const string& filename) {
    fstream file(filename, ios::in | ios::out);
    if (!file.is_open()) {
        cout << "Couldn't open the file" << endl;
        return;
    }

    Employee employees[10];

    int i = 0;
    while (true) {
        Employee emp;
        file >> emp.id >> emp.sex >> emp.hourlyWage >> emp.yearsWithCompany;

        if (file.eof())
            break;

        employees[i] = emp;
        i++;
    }

    file.clear();
    file.seekp(0);

    for (int i = 0; i < 10; i++) {
        cout << "Employee ID: " << employees[i].id << endl;
        cout << "Enter updated hourly wage: ";
        cin >> employees[i].hourlyWage;
        cout << "Enter updated years with the company: ";
        cin >> employees[i].yearsWithCompany;

        file << employees[i].id << " " << employees[i].sex << " " << employees[i].hourlyWage << " " << employees[i].yearsWithCompany << endl;
    }

    file.close();
}

int main() {
    const string filename = "employee_records.txt";

    // Store employee records in a file
    storeEmployeeRecords(filename);

    // Calculate total pay for each employee
    calculateTotalPay(filename);

    // Update employee data and create a new file
    updateEmployeeData(filename);

    return 0;
}
