#include<iostream>
using namespace std;

class Vehicle {
    public:
        int model_number;
        float price;
        int seat_capacity;
        string vehicle_type;

        void getInput() {
            cout << "Enter Model Number: ";
            cin >> model_number;
            cout << "Enter Price: ";
            cin >> price;
            cout << "Enter Seat Capacity: ";
            cin >> seat_capacity;
            cout << "Enter Vehicle Type (Private/Public): ";
            cin >> vehicle_type;
        }

        void displayInfo() {
            cout << "Vehicle Model Number: " << model_number << endl;
            cout << "Price: " << price << endl;
            cout << "Seat Capacity: " << seat_capacity << endl;
            cout << "Vehicle Type: " << vehicle_type << endl;
        }
};

int main() {
    Vehicle car, bus;

    cout << "Enter details for Car:" << endl;
    car.getInput();
    cout << "\nEnter details for Bus:" << endl;
    bus.getInput();

    cout << "\nCar Details:" << endl;
    car.displayInfo();
    cout << "\nBus Details:" << endl;
    bus.displayInfo();

    return 0;
}
