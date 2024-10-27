#include <bits/stdc++.h>
using namespace std;

class A{
private:
    int x;
public:
    A(int x){
        this->x = x;
    }


    friend A operator++(A &a,int);
    A operator--(int){
        cout  << "The number " << this->x-- << " after decrementing " << this->x << endl;
        return A(this->x);
    }

    void display(){
        cout << "The number is :" << this->x << endl;
    }
};

A operator++(A &a, int){
    cout << "The number " << a.x++ << " after incrementing " << a.x << endl;
    return A(a.x);
}

int main(){
    A i1(1),i2(2);
    i1++;
    i2--;

    return 0;
}
