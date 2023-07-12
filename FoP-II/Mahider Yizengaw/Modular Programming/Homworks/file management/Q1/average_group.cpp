#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin("data.txt");

    if (!fin)
    {
        cout << "Unable to open file";
        exit(1); // terminate with error
    }

    int numGroups;
    int numItems;
    double sum;
    double average;

    while (fin >> numItems)
    {
        sum = 0;

        for (int i = 0; i < numItems; i++)
        {
            double item;
            fin >> item;
            sum += item;
        }

        average = sum / numItems;

        cout << "Average of group: " << average << endl;
    }

    fin.close();

    return 0;
}
