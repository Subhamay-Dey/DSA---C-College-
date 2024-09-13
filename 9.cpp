#include <iostream>
using namespace std;

class Item {
    string itemName;
    int itemCode;
    float price;
    float quantity;
public:
    void getItemInfo() {
        cout << "Enter Item Name: ";
        cin >> itemName;
        cout << "Enter Item Code: ";
        cin >> itemCode;
        cout << "Enter Price: ";
        cin >> price;
        cout << "Enter Quantities available in KG: ";
        cin >> quantity;
    }

    void displayItemInfo() {
        cout << "Details of the item:\n";
        cout << "Item name: " << itemName << endl;
        cout << "Item code: " << itemCode << endl;
        cout << "Price: " << price << endl;
        cout << "Quantities available: " << quantity << " KG" << endl;
    }
};

int main() {
    Item item;
    item.getItemInfo();
    item.displayItemInfo();
    return 0;
}
