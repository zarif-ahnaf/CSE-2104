#include <bits/stdc++.h>
using namespace std;

class Mammals {
public:
    void display() {
        cout << "I am a mammal" << endl;
    }
};

class MarineAnimals {
public:
    void display() {
        cout << "I am a marine animal" << endl;
    }
};

class BlueWhale : public Mammals, public MarineAnimals {
public:
    void display() {
        cout << "I belong to both the categories: Mammals as well as Marine Animals" << endl;
    }
};

int main() {
    Mammals mammal;    MarineAnimals marine;
    BlueWhale blueWhale;


    mammal.display();
    marine.display();
    blueWhale.display();

    blueWhale.Mammals::display();
    blueWhale.MarineAnimals::display();
    return 0;
}
