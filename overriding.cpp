#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() const {
        cout << "Animals make sounds" << endl;
    }

    virtual ~Animal() {}
};

class Dog : public Animal {
public:
    void sound() const override {
        cout << "Dog barks" << endl;
    }
};

class Cat : public Animal {
public:
    void sound() const override {
        cout << "Cat meows" << endl;
    }
};

int main() {
    Animal* animal;
    Dog dog;
    Cat cat;

    animal = &dog;
    animal->sound();

    animal = &cat;
    animal->sound();

    return 0;
}
