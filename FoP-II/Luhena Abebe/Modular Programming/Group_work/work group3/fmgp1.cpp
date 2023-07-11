#include <iostream>
#include <fstream>

const int MAX_SIZE = 10; // Maximum size of the array

void readFileIntoArray(const char* fileName, int* array, int* count) {
    std::ifstream file(fileName);

    if (!file.is_open()) {
        std::cout << "Failed to open the file.\n";
        return;
    }

    int number;
    *count = 0; // Initialize count to 0

    // Read the file until the end, storing integers in the array
    while (*count < MAX_SIZE && file >> number) {
        array[*count] = number;
        (*count)++;
    }

    file.close();
}

int main() {
    const char* fileName = "input.txt"; // Example file name

    int array[MAX_SIZE];
    int count = 0; // Initialize count to 0

    readFileIntoArray(fileName, array, &count);

    std::cout << "Read " << count << " entries from the file.\n";
    std::cout << "Contents of the array:\n";
    for (int i = 0; i < count; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
