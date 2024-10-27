#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    // Virtual function to allow polymorphic behavior
    virtual void sound() {
        cout << "This is a generic animal sound." << endl;
    }
};

// Derived class 1
class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks." << endl;
    }
};

// Derived class 2
class Cat : public Animal {
public:
    void sound() override {
        cout << "Cat meows." << endl;
    }
};

int main() {
    Animal* animalPtr;  // Base class pointer

    Dog dog;
    Cat cat;

    // Pointing to Dog object
    animalPtr = &dog;
    animalPtr->sound();  // Outputs "Dog barks." due to runtime polymorphism

    // Pointing to Cat object
    animalPtr = &cat;
    animalPtr->sound();  // Outputs "Cat meows." due to runtime polymorphism

    return 0;
}
