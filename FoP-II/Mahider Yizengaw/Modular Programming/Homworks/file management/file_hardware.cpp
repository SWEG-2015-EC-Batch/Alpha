#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;

class Tool {
public:
    Tool() : id(0), name(""), quantity(0), cost(0.0) {}
    Tool(int i, string n, int q, double c) : id(i), name(n), quantity(q), cost(c) {}
    void set(int i, string n, int q, double c) { id = i; name = n; quantity = q; cost = c; }
    void display() const { cout << id << '\t' << name << '\t' << quantity << '\t' << cost << endl; }
private:
    int id;
    string name;
    int quantity;
    double cost;
};

void writeData(fstream& file);
void readData(fstream& file);
void updateData(fstream& file);
void deleteData(fstream& file);

int main() {
    fstream file("hardware.dat", ios::in | ios::out | ios::binary);
    if (!file) {
        cerr << "File could not be opened." << endl;
        exit(EXIT_FAILURE);
    }

    int choice;
    do {
        cout << "\n\nEnter your choice:\n"
            "1 - store a formatted text file of hardware tools called \"tools.txt\" for printing\n"
            "2 - input new records\n"
            "3 - list all records\n"
            "4 - update a record\n"
            "5 - delete a record\n"
            "6 - end program\n";
        cin >> choice;

        switch (choice) {
        case 1:
            writeData(file);
            break;
        case 2:
            file.clear();
            writeData(file);
            break;
        case 3:
            readData(file);
            break;
        case 4:
            updateData(file);
            break;
        case 5:
            deleteData(file);
            break;
        case 6:
            cout << "Program terminating.\n";
            break;
        default:
            cout << "Invalid choice.\n";
            break;
        }
    } while (choice != 6);

    return 0;
}

void writeData(fstream& file) {
    ofstream outFile("tools.txt", ios::out);

    if (!outFile) {
        cerr << "File could not be opened." << endl;
        exit(EXIT_FAILURE);
    }

    Tool blankTool;
    for (int i = 0; i < 100; ++i)
        outFile.write(reinterpret_cast<const char*>(&blankTool), sizeof(Tool));

    outFile.close();

    cout << "\nNew hardware.dat created.\n";
}

void readData(fstream& file) {
    Tool tool;

    cout << "\n\nTool ID\tName\tQuantity\tCost\n";

    file.seekg(0);

    while (file.read(reinterpret_cast<char*>(&tool), sizeof(Tool)))
        if (tool.display(), true)
            ;

}

void updateData(fstream& file) {
    int id;
    string name;
    int quantity;
    double cost;

    cout << "\nEnter tool ID to update: ";
    cin >> id;

    file.seekg((id - 1) * sizeof(Tool));

    Tool tool;

    if (file.read(reinterpret_cast<char*>(&tool), sizeof(Tool))) {
        cout << tool.id << '\t' << tool.name << '\t' << tool.quantity << '\t' << tool.cost << endl;

        cout << "\nEnter new tool data:\n";
        cout << "Name: "; cin >> ws; getline(cin, name);
        cout << "Quantity: "; cin >> quantity;
        cout << "Cost: "; cin >> cost;

        tool.set(id, name, quantity, cost);

        file.seekp((id - 1) * sizeof(Tool));
        file.write(reinterpret_cast<const char*>(&tool), sizeof(Tool));
    }
}

void deleteData(fstream& file) {
    int id;

    cout << "\nEnter tool ID to delete: ";
    cin >> id;
}
