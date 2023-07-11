#include <iostream>
#include <fstream>

int main() {
    std::ifstream file("Sheet5Ex5.cpp");
    char ch;
    int characterCounts[26] = {0}; // Initialize all counts to 0
    int totalCount = 0;

    while (file.get(ch)) {
        if (std::islower(ch)) {
            characterCounts[ch - 'a']++; // Increment the count for the respective character
            totalCount++;
        }
    }

    std::cout << "CHARACTER     OCCURRENCES\n";
    for (int i = 0; i < 26; i++) {
        std::cout << static_cast<char>(i + 'a') << "     " << characterCounts[i] << std::endl;
    }
    std::cout << ". .\n";
    std::cout << "Total         " << totalCount << std::endl;

    file.close();

    return 0;
}
