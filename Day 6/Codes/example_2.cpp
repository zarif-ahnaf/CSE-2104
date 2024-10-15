#include <bits/stdc++.h>
using namespace std;

class Room {
    double length;
    double breadth;
    double height;

public:
    double Area() {
        return length * breadth;
    }

    double Volume() {
        return this->Area() * height;
    }

    void initialize(double length,double breath, double height){
        this->length = length;
        this->breadth = breath;
        this->height = height;
    }
};

int main() {
    Room room;
    room.initialize(5.0,4.0,3.0);

    cout << "Area of Room: " << room.Area() << endl;
    cout << "Volume of Room: " << room.Volume() << endl;

    return 0;
}
