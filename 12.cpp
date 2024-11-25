#include <iostream>
using namespace std;

class magic; // Forward declaration

class fun {
private:
    float number;
public:
    fun(float n) : number(n) {} // Constructor to initialize number

    // Friend function to compare fun and magic data members
    friend void compare(const fun& f, const magic& m);
};

class magic {
private:
    float number;
public:
    magic(float n) : number(n) {} // Constructor to initialize number

    // Friend function to compare fun and magic data members
    friend void compare(const fun& f, const magic& m);
};

// Function to compare private members of fun and magic
void compare(const fun& f, const magic& m) {
    if (f.number > m.number) {
        cout << "data member of fun is greater" << endl;
    } else if (f.number < m.number) {
        cout << "data member of magic is greater" << endl;
    } else {
        cout << "data members of fun and magic are equal" << endl;
    }
}

int main() {
    fun f(10.25);
    magic m(11.10);

    compare(f, m); // Compare the data members

    return 0;
}
