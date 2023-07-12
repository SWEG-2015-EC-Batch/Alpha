#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

struct Tool {
    int id;
    std::string name;
    int quantity;
    double cost;
};

void initializeFile(std::fstream &file) {
    Tool blankTool = {0, "", 0, 0.0};
    for (int i = 0; i < 100; i++) {
        file.write(reinterpret_cast<const char *>(&blankTool), sizeof(Tool));
    }
}

void addTool(std::fstream &file) {
    Tool tool;
    std::cout << "Enter tool ID (1-100): ";
    std::cin >> tool.id;

    file.seekg((tool.id - 1) * sizeof(Tool));
    file.read(reinterpret_cast<char *>(&tool), sizeof(Tool));

    if (tool.id != 0) {
        std::cerr << "Tool already exists." << std::endl;
        return;
    }

    std::cout << "Enter tool name: ";
    std::cin >> tool.name;
    std::cout << "Enter quantity: ";
    std::cin >> tool.quantity;
    std::cout << "Enter cost: ";
    std::cin >> tool.cost;

    file.seekp((tool.id - 1) * sizeof(Tool));
    file.write(reinterpret_cast<const char *>(&tool), sizeof(Tool));
}

void listTools(std::fstream &file) {
    Tool tool;
    std::cout << std::left << std::setw(10) << "ID" << std::setw(20) << "Name" << std::setw(10) << "Quantity" << std::setw(10) << "Cost" << std::endl;

    for (int i = 0; i < 100; i++) {
        file.seekg(i * sizeof(Tool));
        file.read(reinterpret_cast<char *>(&tool), sizeof(Tool));

        if (tool.id != 0) {
            std::cout << std::left << std::setw(10) << tool.id << std::setw(20) << tool.name << std::setw(10) << tool.quantity << std::setw(10) << tool.cost << std::endl;
        }
    }
}

void deleteTool(std::fstream &file) {
    int id;
    Tool blankTool = {0, "", 0, 0.0};

    std::cout << "Enter tool ID to delete: ";
    std::cin >> id;

    file.seekg((id - 1) * sizeof(Tool));
    file.write(reinterpret_cast<const char *>(&blankTool), sizeof(Tool));
}

void updateTool(std::fstream &file) {
    Tool tool;
    int id;

    std::cout << "Enter tool ID to update: ";
    std::cin >> id;

    file.seekg((id - 1) * sizeof(Tool));
    file.read(reinterpret_cast<char *>(&tool), sizeof(Tool));

    if (tool.id == 0) {
        std::cerr << "Tool does not exist." << std::endl;
        return;
    }

    std::cout << "Enter new name: ";
    std::cin >> tool.name;
    std::cout << "Enter new quantity: ";
    std::cin >> tool.quantity;
    std::cout << "Enter new cost: ";
    std::cin >> tool.cost;

    file.seekp((id - 1) * sizeof(Tool));
    file.write(reinterpret_cast<const char *>(&tool), sizeof(Tool));
}

int main() {
    std::fstream file("hardware.dat", std::ios::in | std::ios::out | std::ios::binary);

    if (!file) {
        file.open("hardware.dat", std::ios::out);
        file.close();
        file.open("hardware.dat", std::ios::in | std::ios::out | std::ios::binary);
        initializeFile(file);
    }

    int choice;
    while (true) {
        std::cout << "1. Add tool" << std::endl;
        std::cout << "2. List tools" << std::endl;
        std::cout << "3. Delete tool" << std::endl;
        std::cout << "4. Update tool" << std::endl;
        std::cout << "5. Quit" << std::endl;
        std::cout << "Enter choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                addTool(file);
                break;
            case 2:
                listTools(file);
                break;
            case 3:
                deleteTool(file);
                break;
            case 4:
                updateTool(file);
                break;
            case 5:
                file.close();
                return 0;
            default:
                std::cerr << "Invalid choice." << std::endl;
                break;
        }
    }
}
