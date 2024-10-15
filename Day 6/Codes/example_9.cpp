#include <bits/stdc++.h>
using namespace std;

class Shape {
public:
    virtual void print() {
        cout << "This is a shape" << endl;
    }
};

class Polygon : public Shape {
public:
    void print() override {
        cout << "Polygon is a shape." << endl;
    }
};

class Rectangle : public Polygon {
public:
    void print() override {
        cout << "Rectangle is a polygon." << endl;
    }
};

class Triangle : public Polygon {
public:
    void print() override {
        cout << "Triangle is a polygon." << endl;
    }
};

class Square : public Rectangle {
public:
    void print() override {
        cout << "Square is a rectangle." << endl;
    }
};

int main() {
    Shape shape;
    Polygon polygon;
    Rectangle rectangle;
    Triangle triangle;
    Square square;

    shape.print();
    polygon.print();
    rectangle.print();
    triangle.print();
    square.print();

    return 0;
}
