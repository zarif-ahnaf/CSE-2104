#include <iostream>
using namespace std;

class Room {
public:
    double length;
    double breadth;
    double height;

    double Area() {
        return length * breadth;
    }

    double Volume() {
        return this->Area() * height;
    }
};

int main() {
    Room room;
    room.length = 5.0;
    room.breadth = 4.0;
    room.height = 3.0;

    cout << "Area of Room: " << room.Area() << endl;
    cout << "Volume of Room: " << room.Volume() << endl;

    return 0;
}
