#include <iostream>
using namespace std;

class Car {
private:
    string model;
    int year;
    float speed;

public:
    // Setter functions
    void setModel(string m) {
        model = m;
    }

    void setYear(int y) {
        year = y;
    }

    void setSpeed(float s) {
        speed = s;
    }

    // Getter functions
    string getModel() {
        return model;
    }

    int getYear() {
        return year;
    }

    float getSpeed() {
        return speed;
    }

    // Display 
    void display() {
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
        cout << "Speed: " << speed << " km/h" << endl;
        cout << "----------------------" << endl;
    }
};

int main() {
    Car c1;

   
    c1.setModel("Toyota Fortuner");
    c1.setYear(2022);
    c1.setSpeed(180.5);


	cout << "Using Getters:" << endl;
    cout << "Model: " << c1.getModel() << endl;
    cout << "Year: " << c1.getYear() << endl;
    cout << "Speed: " << c1.getSpeed() << " km/h" << endl;

    cout << "\nUsing Display Function:" << endl;
    c1.display();

    return 0;
}