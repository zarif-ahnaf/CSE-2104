#include <bits/stdc++.h>
using namespace std;

class A{
private:
    string x;
    int y;

public:
    A(int y){
        this->y = y;
    }
    A(string i){
        this->x = i;
    }
    A operator+=(int a){
        this->y += a;
    cout << "After += operation: "<< this->y << endl;

    }
    A operator-=(int a){
        this->y -= a;
    cout << "After -= operation: "<< this->y << endl;

    }
    void operator++(int a){
        this->y++;
        cout << "After ++ operation: "<< this->y << endl;

    }
    void operator--(int a){
        this->y--;
        cout << "After -- operation: "<< this->y << endl;
    }
    void operator-(const A &a){
        int m = y-a.y;
        cout << "The result is: "<< y  << "-" << a.y << "=" << m << endl;
    }

    friend void operator+(const A &a, const A &b);
};

void operator+(const A &a, const A &b){
    string m =  a.x + b.x;
    cout << "The string is: " << m <<endl;
}

int main(){
    A a1("Hello");
    A a2("World");

    a1+a2;

    A b1(2);
    A b2(1);
    b1++;
    b2--;

    b2+=4;

    b1-b2;
    return 0;
}
