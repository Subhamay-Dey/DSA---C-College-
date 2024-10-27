#include <iostream>
using namespace std;

class Box {
private:
    double length;

public:
    Box(double len) : length(len) {}  // Constructor to initialize length

    // Friend function declaration
    friend void printLength(Box box);  // Granting access to private members
};

// Friend function definition
void printLength(Box box) {
    // Accessing private member of Box
    cout << "Length of the box: " << box.length << endl;
}

int main() {
    Box box(10.5);  // Creating an object of Box with length 10.5
    printLength(box);  // Calling the friend function

    return 0;
}
