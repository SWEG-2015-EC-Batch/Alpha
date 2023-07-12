#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    const int max = 20;
    string name[max];
    double exam1[max];
    double exam2[max];
    double homework[max];
    double final_exam[max];
    double final_grade[max];
    char grade[max];

    int num_s;
    cout << "Enter number of students (up to " << max << "): ";
    cin >> num_s;

    for (int i = 0; i < num_s; i++)
    {
        cout << "Enter name for student " << i + 1 << ": ";
        cin >> name[i];

        cout << "Enter exam 1 score for student " << i + 1 << ": ";
        cin >> exam1[i];

        cout << "Enter exam 2 score for student " << i + 1 << ": ";
        cin >> exam2[i];

        cout << "Enter homework score for student " << i + 1 << ": ";
        cin >> homework[i];

        cout << "Enter final exam score for student " << i + 1 << ": ";
        cin >> final_exam[i];

        final_grade[i] = (0.20 * exam1[i]) + (0.20 * exam2[i]) + (0.35 * homework[i]) + (0.25 * final_exam[i]);

        if (final_grade[i] >= 90)
            grade[i] = 'A';
        else if (final_grade[i] >= 80)
            grade[i] = 'B';
        else if (final_grade[i] >= 70)
            grade[i] = 'C';
        else if (final_grade[i] >= 60)
            grade[i] = 'D';
        else
            grade[i] = 'F';
    }

    ofstream fout("grades.txt");

    if (!fout)
    {
        cout << "Unable to open file";
        exit(1); // terminate with error
    }

    for (int i = 0; i < num_s; i++)
    {
        fout << name[i] << "\t" << exam1[i] << "\t" << exam2[i] << "\t" 
                << homework[i] << "\t" << final_exam[i] << "\t" 
                << final_grade[i] << "\t" << grade[i] << endl;

        cout << name[i] << "\t" << exam1[i] << "\t" << exam2[i] 
             << "\t" << homework[i] << "\t" 
             << final_exam[i] << "\t" 
             << final_grade[i] 
             << "\t" 
             << grade[i]
             << endl;
    }

    fout.close();

    return 0;
}