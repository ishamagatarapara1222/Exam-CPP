#include <iostream>
using namespace std;

// Base class
class Device {
protected:
    string brand;
    float price;

public:
    void setData(string b, float p) {
        brand = b;
        price = p;
    }

    
    virtual float calculateDiscount() {
        return 0; 
    }

    // Display 
    virtual void display() {
        cout << "Brand: " << brand << endl;
        cout << "Price: " << price << endl;
    }

    virtual ~Device() {}
};

// Derived class: Laptop
class Laptop : public Device {
public:
    float calculateDiscount() override {
        return price * 0.10; // for 10% discount
    }

    void display() override {
        cout << "Laptop:" << endl;
        Device::display();
        cout << "Discount: " << calculateDiscount() << endl;
        cout << "----------------------" << endl;
    }
};

// Derived class: Smartphone
class Smartphone : public Device {
public:
    float calculateDiscount() override {
        return price * 0.05; // for 5% discount
    }

    void display() override {
        cout << "Smartphone:" << endl;
        Device::display();
        cout << "Discount: " << calculateDiscount() << endl;
        cout << "----------------------" << endl;
    }
};

int main() {
    // Array 
    Device* devices[2];

    Laptop l1;
    l1.setData("HP", 80000);

    Smartphone s1;
    s1.setData("iPhone", 60000);

    // Assigning objects 
    devices[0] = &l1;
    devices[1] = &s1;

 
    for (int i = 0; i < 2; i++) {
        devices[i]->display();  
    }

    return 0;
}