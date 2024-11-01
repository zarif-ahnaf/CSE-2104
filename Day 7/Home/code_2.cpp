#include <bits/stdc++.h>
using namespace std;

class A{
private:
    string x;
public:
    A(string x){
        this->x = x;
    }
    friend A operator+(const A &a, const A &b);

    void display(){
        cout << "The string is :" << this->x << endl;
    }
};

A operator+(const A &a, const A &b){
    string s = a.x + b.x;
    return A(s);
}

int main(){
    A s1("Hello"), s2("World");
    A s3 = s1+s2;

    s3.display();
    return 0;
}
