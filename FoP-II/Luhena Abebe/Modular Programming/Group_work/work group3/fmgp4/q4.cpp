#include <iostream>
#include <fstream>
#include <algorithm>
#include <iomanip>

using namespace std;

struct Employee {
    int id;
    char sex;
    float hourlyWage;
    int yearsWithCompany;
};

bool compareByID(const Employee& emp1, const Employee& emp2) {
    return emp1.id < emp2.id;
}

void createEmployeeFile() {
    ofstream file("employees.txt");

    Employee employees[10];

    cout << "Enter the information for 10 employees:\n";
    for (int i = 0; i < 10; i++) {
        cout << "Employee " << i + 1 << ":\n";
        cout << "ID No.: ";
        cin >> employees[i].id;
        cout << "Sex (M/F): ";
        cin >> employees[i].sex;
        cout << "Hourly Wage: ";
        cin >> employees[i].hourlyWage;
        cout << "Years with the Company: ";
        cin >> employees[i].yearsWithCompany;

        file << employees[i].id << " " << employees[i].sex << " " << employees[i].hourlyWage << " " << employees[i].yearsWithCompany << "\n";
    }

    file.close();

    // Sort the employees by ID number
    sort(employees, employees + 2, compareByID);

    // Write sorted information to a new file
    ofstream sortedFile("sorted_employees.txt");
    for (int i = 0; i < 2; i++) {
        sortedFile << employees[i].id << " " << employees[i].sex << " " << employees[i].hourlyWage << " " << employees[i].yearsWithCompany << "\n";
    }
    sortedFile.close();
}

void calculateTotalPay() {
    ifstream file("sorted_employees.txt");

    float hoursWorked;
    int employeeId;

    cout << "Enter the number of hours worked by each employee:\n";
    while (file >> employeeId) {
        cout << "Employee " << employeeId << ": ";
        cin >> hoursWorked;

        // Calculate total pay for the month
        Employee employee;
        file >> employee.sex >> employee.hourlyWage >> employee.yearsWithCompany;

        float totalPay = hoursWorked * employee.hourlyWage;

        cout << "Total pay for the month: $" << fixed << setprecision(2) << totalPay << endl;
    }

    file.close();
}

void updateEmployeeData() {
    ifstream file("sorted_employees.txt");
    ofstream updatedFile("updated_employees.txt");

    int employeeId;
    float newHourlyWage;
    int newYearsWithCompany;

    cout << "Enter updated information for each employee:\n";
    while (file >> employeeId) {
        updatedFile << employeeId << " ";
        cout << "Employee " << employeeId << ":\n";
        cout << "New Hourly Wage: ";
        cin >> newHourlyWage;
        cout << "New Years with the Company: ";
        cin >> newYearsWithCompany;

        // Read and discard the old values
        char sex;
        float hourlyWage;
        int yearsWithCompany;
        file >> sex >> hourlyWage >> yearsWithCompany;

        // Write the updated values to the new file
        updatedFile << sex << " " << newHourlyWage << " " << newYearsWithCompany << "\n";
    }

    file.close();
    updatedFile.close();
}

int main() {
    createEmployeeFile();

    cout << "\n=== Total Pay Calculation ===\n";
    calculateTotalPay();

    cout << "\n=== Employee Data Update ===\n";
    updateEmployeeData();

    return 0;
}
