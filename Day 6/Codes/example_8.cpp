#include <bits/stdc++.h>

using namespace std;

class Vehicle
{
public:
    double mileage;
    double price;
};

class Car : public Vehicle
{
public:
    double ownership_cost;
    int warranty; // in years
    int seating_capacity;
    string fuel_type; // "diesel" or "petrol"
};

class Bike : public Vehicle
{
public:
    int num_cylinders;
    int num_gears;
    string cooling_type; // "air", "liquid", or "oil"
    string wheel_type; // "alloys" or "spokes"
    double fuel_tank_size;
};

class Audi : public Car
{
public:
    string model_type;
};

class Ford : public Car
{
public:
    string model_type;
};

class Bajaj : public Bike
{
public:
    string make_type;
};

class TVS : public Bike
{
public:
    string make_type;
};

int main()
{
    Audi audi;
    audi.model_type = "Audi Q5";
    audi.ownership_cost = 50000;
    audi.warranty = 3;
    audi.seating_capacity = 5;
    audi.fuel_type = "diesel";
    audi.mileage = 15;
    audi.price = 60000;

    Ford ford;
    ford.model_type = "Ford Mustang";
    ford.ownership_cost = 55000;
    ford.warranty = 4;
    ford.seating_capacity = 4;
    ford.fuel_type = "petrol";
    ford.mileage = 10;
    ford.price = 65000;

    Bajaj bajaj;
    bajaj.make_type = "Bajaj Pulsar";
    bajaj.num_cylinders = 1;
    bajaj.num_gears = 5;
    bajaj.cooling_type = "air";
    bajaj.wheel_type = "alloys";
    bajaj.fuel_tank_size = 15;
    bajaj.mileage = 40;
    bajaj.price = 800;

    TVS tvs;
    tvs.make_type = "TVS Apache";
    tvs.num_cylinders = 1;
    tvs.num_gears = 5;
    tvs.cooling_type = "oil";
    tvs.wheel_type = "spokes";
    tvs.fuel_tank_size = 12;
    tvs.mileage = 35;
    tvs.price = 900;

    cout << "Audi Details:" << endl << "Model: " << audi.model_type << endl <<"Mileage: " << audi.mileage
         << endl <<  "Price: $" << audi.price << endl<< "Fuel Type: " << audi.fuel_type
         << endl<< "Seating Capacity: " << audi.seating_capacity
         << endl<< "Warranty: " << audi.warranty << " years" << endl;
    cout << endl;

    cout << "Ford Details:" << endl << "Model: " << ford.model_type << endl << "Mileage: " << ford.mileage
         << endl<< "Price: $" << ford.price << endl << "Fuel Type: " << ford.fuel_type
         << endl << "Seating Capacity: " << ford.seating_capacity
         << endl << "Warranty: " << ford.warranty << " years" << endl;
    cout << endl;

    cout << "Bajaj Bike Details:" << endl << "Make: " << bajaj.make_type << endl << "Mileage: " << bajaj.mileage
         << endl << "Price: $" << bajaj.price << endl << "Cooling Type: " << bajaj.cooling_type
         << endl << "Number of Cylinders: " << bajaj.num_cylinders << endl;
    cout << endl;

    cout << "TVS Bike Details:" << endl << "Make: " << tvs.make_type << endl << "Mileage: " << tvs.mileage
         <<endl << "Price: $" << tvs.price << endl << "Cooling Type: " << tvs.cooling_type
         << endl << "Number of Cylinders: " << tvs.num_cylinders << endl;

    return 0;
}
