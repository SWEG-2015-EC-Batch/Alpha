#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

const int NUM_RECORDS = 100;

// Structure to represent a tool record
struct Tool {
    int toolID;
    std::string name;
    int quantity;
    double cost;
};

// Function to initialize the file with empty records
void initializeFile(const std::string& filename) {
    std::ofstream file(filename, std::ios::binary);

    Tool emptyTool = {0, "", 0, 0.0};

    for (int i = 0; i < NUM_RECORDS; i++) {
        file.write(reinterpret_cast<const char*>(&emptyTool), sizeof(Tool));
    }

    file.close();
}

// Function to display a tool record
void displayRecord(const Tool& tool) {
    std::cout << std::setw(5) << tool.toolID << std::setw(20) << tool.name
              << std::setw(10) << tool.quantity << std::setw(10) << tool.cost << std::endl;
}

// Function to add a new tool record
void addRecord(const std::string& filename) {
    std::fstream file(filename, std::ios::binary | std::ios::in | std::ios::out);

    Tool newTool;
    std::cout << "Enter tool ID: ";
    std::cin >> newTool.toolID;
    std::cout << "Enter tool name: ";
    std::cin.ignore();
    std::getline(std::cin, newTool.name);
    std::cout << "Enter quantity: ";
    std::cin >> newTool.quantity;
    std::cout << "Enter cost: ";
    std::cin >> newTool.cost;

    // Move to the appropriate record in the file based on tool ID
    file.seekp((newTool.toolID - 1) * sizeof(Tool), std::ios::beg);

    // Write the new tool record to the file
    file.write(reinterpret_cast<const char*>(&newTool), sizeof(Tool));

    file.close();
}

// Function to list all tool records
void listRecords(const std::string& filename) {
    std::ifstream file(filename, std::ios::binary);

    Tool currentTool;

    std::cout << std::left << std::setw(10) << "Record" << std::setw(20) << "Tool Name"
              << std::setw(10) << "Quantity" << std::setw(10) << "Cost" << std::endl;

    // Read and display each tool record in the file
    for (int i = 0; i < NUM_RECORDS; i++) {
        file.read(reinterpret_cast<char*>(&currentTool), sizeof(Tool));

        if (file.eof()) {
            break;
        }

        if (currentTool.toolID != 0) {
            displayRecord(currentTool);
        }
    }

    file.close();
}

// Function to delete a tool record
void deleteRecord(const std::string& filename, int toolID) {
    std::fstream file(filename, std::ios::binary | std::ios::in | std::ios::out);

    Tool emptyTool = {0, "", 0, 0.0};

    // Move to the appropriate record in the file based on tool ID
    file.seekp((toolID - 1) * sizeof(Tool), std::ios::beg);

    // Write an empty tool record to "delete" the existing record
    file.write(reinterpret_cast<const char*>(&emptyTool), sizeof(Tool));

    file.close();
}

// Function to update a tool record
void updateRecord(const std::string& filename, int toolID) {
    std::fstream file(filename, std::ios::binary | std::ios::in | std::ios::out);

    Tool updatedTool;

    // Move to the appropriate record in the file based on tool ID
    file.seekg((toolID - 1) * sizeof(Tool), std::ios::beg);

    // Read the existing tool record
    file.read(reinterpret_cast<char*>(&updatedTool), sizeof(Tool));

    if (file.eof()) {
        std::cout << "Tool with ID " << toolID << " not found.\n";
        file.close();
        return;
    }

    std::cout << "Enter new tool name: ";
    std::cin.ignore();
    std::getline(std::cin, updatedTool.name);
    std::cout << "Enter new quantity: ";
    std::cin >> updatedTool.quantity;
    std::cout << "Enter new cost: ";
    std::cin >> updatedTool.cost;

    // Move back to the same record position for updating
    file.seekp((toolID - 1) * sizeof(Tool), std::ios::beg);

    // Write the updated tool record to the file
    file.write(reinterpret_cast<const char*>(&updatedTool), sizeof(Tool));

    file.close();
}

int main() {
    const std::string filename = "hardware.dat";

    // Initialize the file with empty records
    initializeFile(filename);

    int choice, toolID;

    do {
        std::cout << "\n--- Hardware Store Inventory Management ---\n";
        std::cout << "1. Add a new tool record\n";
        std::cout << "2. List all tool records\n";
        std::cout << "3. Delete a tool record\n";
        std::cout << "4. Update a tool record\n";
        std::cout << "5. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                addRecord(filename);
                break;
            case 2:
                listRecords(filename);
                break;
            case 3:
                std::cout << "Enter the tool ID to delete: ";
                std::cin >> toolID;
                deleteRecord(filename, toolID);
                break;
            case 4:
                std::cout << "Enter the tool ID to update: ";
                std::cin >> toolID;
                updateRecord(filename, toolID);
                break;
            case 5:
                std::cout << "Exiting...\n";
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
                break;
        }
    } while (choice != 5);

    return 0;
}

