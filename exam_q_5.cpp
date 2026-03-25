#include <iostream>
using namespace std;

// Abstract class
class Animal {
public:
    // Pure virtual functions
    virtual void makeSound() = 0;
    virtual void move() = 0;

    virtual ~Animal() {}
};


class Lion : public Animal {
public:
    void makeSound() override {
        cout << "Lion roars!" << endl;
    }

    void move() override {
        cout << "Lion runs on land." << endl;
    }
};

// Derived class: Fish
class Fish : public Animal {
public:
    void makeSound() override {
        cout << "Fish make bubbling sound!" << endl;
    }

    void move() override {
        cout << "Fish swims in water." << endl;
    }
};

int main() {
    // Array of Animal pointers
    Animal* animals[2];

    Lion l;
    Fish f;

    animals[0] = &l;
    animals[1] = &f;

    for (int i = 0; i < 2; i++) {
        animals[i]->makeSound();
        animals[i]->move();
        cout << "----------------------" << endl;
    }

    return 0;
}