#include <iostream>
using namespace std;

// Abstract class
class Animal {
public:
    // Pure virtual function
    virtual void sound() = 0;  // Makes Animal an abstract class
};

// Derived class
class Dog : public Animal {
public:
    // Implementing the pure virtual function
    void sound() override {
        cout << "Dog barks" << endl;
    }
};

int main() {
    // Animal animal;  // Error: cannot instantiate an abstract class

    Dog dog;  // Valid: Dog provides implementation for the pure virtual function
    dog.sound();  // Outputs "Dog barks"

    return 0;
}
