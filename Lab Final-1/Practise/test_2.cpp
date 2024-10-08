#include <bits/stdc++.h>
using namespace std;

class Object{
int number;
public:
    void input(int x){
        this->number = x;
    }
    void display(){
        cout << this->number;
    }
    friend void update(Object &obj,int y);
    friend class Friend;

    Object()
    {
        cout << "Constructor called" << endl;
    }
    Object(int x){
        this->number = x;
    }
    ~Object(){
        cout << "Destructor called" << endl;
    }
};

void update(Object &obj, int y){
    obj.number = y;
}

class Friend{
public:

    void update(Object &obj, int y){
        obj.number = y;
    }
};

int main(){
    Object n(1);
    Friend frien;

    update(n,2);
    frien.update(n,3);
    n.display();
}
