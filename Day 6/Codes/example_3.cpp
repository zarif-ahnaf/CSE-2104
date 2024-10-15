#include <bits/stdc++.h>
using namespace std;

// Base class Vehicle
class Vehicle {
public:
    // Method to get the fuel amount
    void fuelAmount() {
        cout << "Fuel amount: 50 liters" << endl;
    }

    // Method to get the vehicle capacity
    void capacity() {
        cout << "Vehicle capacity: 5 people" << endl;
    }

    // Method to apply brakes
    void applyBrakes() {
        cout << "Brakes applied!" << endl;
    }
};

// Derived class Bus from Vehicle
class Bus : public Vehicle {};

// Derived class Car from Vehicle
class Car : public Vehicle {};

// Derived class Truck from Vehicle
class Truck : public Vehicle {};

int main() {
    // Creating objects for each class
    Bus bus;
    Car car;
    Truck truck;

    // Accessing inherited methods
    cout << "Bus:" << endl;
    bus.fuelAmount();
    bus.capacity();
    bus.applyBrakes();

    cout << endl;

    cout << "Car:" << endl;
    car.fuelAmount();
    car.capacity();
    car.applyBrakes();

    cout << endl;

    cout << "Truck:" << endl;
    truck.fuelAmount();
    truck.capacity();
    truck.applyBrakes();
    cout << endl;

    return 0;
}
