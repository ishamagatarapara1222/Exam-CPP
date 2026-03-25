#include <iostream>
using namespace std;


class Device {
private:
    string brand;
    float powerConsumption;

public:
    // Setters
    void setBrand(string b) {
        brand = b;
    }

    void setPower(float p) {
        powerConsumption = p;
    }

    // Getters
    string getBrand() {
        return brand;
    }

    float getPower() {
        return powerConsumption;
    }
};

// Derived class
class Laptop : public Device {
private:
    int ram;

public:
    void setRAM(int r) {
        ram = r;
    }

    void display() {
        cout << "Laptop Details:" << endl;
        cout << "Brand: " << getBrand() << endl;
        cout << "Power Consumption: " << getPower() << " W" << endl;
        cout << "RAM: " << ram << " GB" << endl;
        cout << "----------------------" << endl;
    }
};

// Derived class: Smartphone
class Smartphone : public Device {
private:
    int cameraMP;

public:
    void setCamera(int c) {
        cameraMP = c;
    }

    void display() {
        cout << "Smartphone Details:" << endl;
        cout << "Brand: " << getBrand() << endl;
        cout << "Power Consumption: " << getPower() << " W" << endl;
        cout << "Camera: " << cameraMP << " MP" << endl;
        cout << "----------------------" << endl;
    }
};

int main() {
    
    Laptop l1;
    l1.setBrand("Dell");
    l1.setPower(65);
    l1.setRAM(16);

   
    Smartphone s1;
    s1.setBrand("Samsung");
    s1.setPower(15);
    s1.setCamera(64);

    
    l1.display();
    s1.display();

    return 0;
}