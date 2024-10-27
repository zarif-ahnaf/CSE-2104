#include <bits/stdc++.h>
using namespace std;

class A{
private:
    string x;

public:

    A(string i){
        this->x = i;
    }

    void operator+(const A &a){
        this->x = this->x + a.x;
    }
    void display(){
    cout << this->x << endl;
    }

};


int main(){
    A a1("Hello");
    A a2("World");

    a1+a2;
    a1.display();

    return 0;
}
