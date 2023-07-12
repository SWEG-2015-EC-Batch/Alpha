#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;

int main() {
    ifstream fin("Sheet5Ex5.cpp", ios::in);

    if (!fin) {
        cerr << "File could not be opened." << endl;
        exit(EXIT_FAILURE);
    }

    int counts[26] = { 0 };
    char ch;

    while (fin.get(ch))
        if (islower(ch))
            ++counts[ch - 'a'];

    cout << "CHARACTER\tOCCURRENCES\n";
    for (int i = 0; i < 26; ++i)
        cout << static_cast<char>('a' + i) << '\t' << counts[i] << endl;

    return 0;
}
