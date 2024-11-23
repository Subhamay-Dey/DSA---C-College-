#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    // Virtual function to allow overriding
    virtual void sound() {
        cout << "Animal makes a sound" << endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    // Overriding the sound() method in the derived class
    void sound() override {
        cout << "Dog barks" << endl;
    }
};

int main() {
    Animal* animalPtr;  // Base class pointer
    Dog dog;            // Derived class object
    
    animalPtr = &dog;   // Pointing to derived class object

    // Calling the overridden method
    animalPtr->sound();  // Outputs "Dog barks" because of method overriding

    return 0;
}