#include <iostream>
using namespace std;

class Car {
public:
    void drive() { cout << "Car is driving"; }
};

int main() {
    Car c;
    c.drive();
    return 0;
}
