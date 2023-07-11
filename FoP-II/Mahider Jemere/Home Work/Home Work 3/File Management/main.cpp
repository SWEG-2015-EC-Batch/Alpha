#include <iostream>
#include <fstream>
using namespace std;

void readFileToArray(const char* filename, int array[], int& count);

int main()
{
    const char* filename = "data.txt";
    int array[100];
    int count = 0;

    // Read file into array
    readFileToArray(filename, array, count);

    // Display the array elements
    cout << "Array elements: ";
    for (int i = 0; i < count; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    cout << "Total entries: " << count << endl;

    return 0;
}

void readFileToArray(const char* filename, int array[], int& count)
{
    ifstream file(filename);
    if (!file.is_open()) {
        cout << "Couldn't open the file" << endl;
        return;
    }

    count = 0;

    int number;
    while (file >> number) {
        array[count] = number;
        count++;
    }

    file.close();
}
