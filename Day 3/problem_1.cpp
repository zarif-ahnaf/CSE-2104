#include <bits/stdc++.h>
using namespace std;

double PI  = 3.14;

class Circle{
    double radius;
public:
    void get_input(double r){
        radius = r;
    }
    double area(){
        return 2 * PI * radius;
    }
    double circumference(){
        return PI * radius * radius;
    }
};

int main(){
    Circle c;
    int x ;

    cin >> x;
    c.get_input(x);
    cout << "Area:" << c.area() << endl;
    cout <<"Circumference:" << c.circumference() << endl;

}
