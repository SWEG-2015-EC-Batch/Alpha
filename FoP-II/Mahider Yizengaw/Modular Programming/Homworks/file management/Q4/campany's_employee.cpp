#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

struct Employee
{
    int id;
    char sex;
    double hourlyWage;
    int yearsWithCompany;
};

void writeToFile(Employee employees[], int size)
{
    ofstream outFile("employees.txt");

    if (!outFile)
    {
        cout << "Unable to open file";
        exit(1); // terminate with error
    }

    for (int i = 0; i < size; i++)
    {
        outFile << employees[i].id << ' '
                << employees[i].sex << ' '
                << employees[i].hourlyWage << ' '
                << employees[i].yearsWithCompany << endl;
    }

    outFile.close();
}

void readFromFile(Employee employees[], int size)
{
    ifstream inFile("employees.txt");

    if (!inFile)
    {
        cout << "Unable to open file";
        exit(1); // terminate with error
    }

    for (int i = 0; i < size; i++)
    {
        inFile >> employees[i].id >> employees[i].sex >> employees[i].hourlyWage >> employees[i].yearsWithCompany;
    }

    inFile.close();
}

void printEmployees(Employee employees[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << employees[i].id << ' '
             << employees[i].sex << ' '
             << employees[i].hourlyWage << ' '
             << employees[i].yearsWithCompany << endl;
    }
}

void sortEmployees(Employee employees[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int minIndex = i;

        for (int j = i + 1; j < size; j++)
        {
            if (employees[j].id < employees[minIndex].id)
            {
                minIndex = j;
            }
        }

        Employee temp = employees[minIndex];
        employees[minIndex] = employees[i];
        employees[i] = temp;
    }
}

void calculatePay(Employee employee)
{
    double hoursWorked;
    cout << "Enter hours worked: ";
    cin >> hoursWorked;

    double totalPay = hoursWorked * employee.hourlyWage;

    cout << "Total pay: " << totalPay << endl;
}

void updateEmployee(Employee &employee)
{
    cout << "Enter new hourly wage: ";
    cin >> employee.hourlyWage;

    cout << "Enter new years with company: ";
    cin >> employee.yearsWithCompany;
}

int main()
{
    const int NUM_EMPLOYEES = 10;
    Employee employees[NUM_EMPLOYEES] = {
        {1000, 'M', 10.00, 1},
        {1001, 'F', 12.00, 2},
        {1002, 'M', 15.00, 3},
        {1003, 'F', 20.00, 4},
        {1004, 'M', 25.00, 5},
        {1005, 'F', 30.00, 6},
        {1006, 'M', 35.00, 7},
        {1007, 'F', 40.00, 8},
        {1008, 'M', 45.00, 9},
        {1009, 'F', 50.00, 10}
    };

    writeToFile(employees, NUM_EMPLOYEES);

    readFromFile(employees, NUM_EMPLOYEES);

    sortEmployees(employees, NUM_EMPLOYEES);

    printEmployees(employees, NUM_EMPLOYEES);
}
