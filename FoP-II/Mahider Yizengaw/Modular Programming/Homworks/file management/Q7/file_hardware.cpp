#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

struct Tool {
    int id;
    string name;
    int quantity;
    double cost;
};

void initializeFile(fstream &file) {
    Tool blankTool = {0, "", 0, 0.0};
    for (int i = 0; i < 100; i++) {
        file.write(reinterpret_cast<const char *>(&blankTool), sizeof(Tool));
    }
}

void addTool(fstream &file) {
    Tool tool;
    cout << "Enter tool ID (1-100): ";
    cin >> tool.id;

    file.seekg((tool.id - 1) * sizeof(Tool));
    file.read(reinterpret_cast<char *>(&tool), sizeof(Tool));

    if (tool.id != 0) {
        cerr << "Tool already exists." << endl;
        return;
    }

    cout << "Enter tool name: ";
    cin >> tool.name;
    cout << "Enter quantity: ";
    cin >> tool.quantity;
    cout << "Enter cost: ";
    cin >> tool.cost;

    file.seekp((tool.id - 1) * sizeof(Tool));
    file.write(reinterpret_cast<const char *>(&tool), sizeof(Tool));
}

void listTools(fstream &file) {
    Tool tool;
    cout << left << setw(10) << "ID" << setw(20) << "Name" << setw(10) << "Quantity" << setw(10) << "Cost" << endl;

    for (int i = 0; i < 100; i++) {
        file.seekg(i * sizeof(Tool));
        file.read(reinterpret_cast<char *>(&tool), sizeof(Tool));

        if (tool.id != 0) {
            cout << left << setw(10) << tool.id << setw(20) << tool.name << setw(10) << tool.quantity << setw(10) << tool.cost << endl;
        }
    }
}

void deleteTool(fstream &file) {
    int id;
    Tool blankTool = {0, "", 0, 0.0};

    cout << "Enter tool ID to delete: ";
    cin >> id;

    file.seekg((id - 1) * sizeof(Tool));
    file.write(reinterpret_cast<const char *>(&blankTool), sizeof(Tool));
}

void updateTool(fstream &file) {
    Tool tool;
    int id;

    cout << "Enter tool ID to update: ";
    cin >> id;

    file.seekg((id - 1) * sizeof(Tool));
    file.read(reinterpret_cast<char *>(&tool), sizeof(Tool));

    if (tool.id == 0) {
        cerr << "Tool does not exist." << endl;
        return;
    }

    cout << "Enter new name: ";
    cin >> tool.name;
    cout << "Enter new quantity: ";
    cin >> tool.quantity;
    cout << "Enter new cost: ";
    cin >> tool.cost;

    file.seekp((id - 1) * sizeof(Tool));
    file.write(reinterpret_cast<const char *>(&tool), sizeof(Tool));
}

int main() {
    fstream file("hardware.dat", ios::in | ios::out | ios::binary);

    if (!file) {
        file.open("hardware.dat", ios::out);
        file.close();
        file.open("hardware.dat", ios::in | ios::out | ios::binary);
        initializeFile(file);
    }

    int choice;
    while (true) {
        cout << "1. Add tool" << endl;
        cout << "2. List tools" << endl;
        cout << "3. Delete tool" << endl;
        cout << "4. Update tool" << endl;
        cout << "5. Quit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

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
                cerr << "Invalid choice." << endl;
                break;
        }
    }
}
