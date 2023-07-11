#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream lw_case("Sheet5Ex5.cpp", ios::in);
    if (!lw_case.is_open()) {
        cout << "Couldn't open the file";
        return 0;
    }

    int occurrences[26] = {0};  // Array to store the occurrences of each character
    char c;

    while (lw_case.get(c)) {
        if (c >= 'a' && c <= 'z') {
            occurrences[c - 'a']++;  // Increment the occurrence count for the specific character
        }
    }

    cout << "CHARACTER\t\t\tOCCURRENCES\n";
    for (int i = 0; i < 26; i++) {
        cout << static_cast<char>('a' + i) << "\t\t\t\t" << occurrences[i] << "\n";
    }

    lw_case.close();
    return 0;
}
