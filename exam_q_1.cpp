#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int rollNumber;

public:
    // Parameterized Constructor
    Student(string n, int r) {
        name = n;
        rollNumber = r;
    }

    //display student 
    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "----------------------" << endl;
    }
};

int main() {
   
    Student students[] = {
        Student("Isha", 101),
        Student("Grisha", 102),
        Student("Charmi", 103)
    };

    // Displaying details of student
    for (int i = 0; i < 3; i++) {
        students[i].display();
    }

    return 0;
}



