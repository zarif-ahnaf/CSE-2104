#include<bits/stdc++.h>
using namespace std;

class Integer {
    int m,n;
public:
    Integer(){
        m=1;
        n=2;
    }
    Integer(int x,int y){
        m=x;
        n=y;
    }
    Integer(Integer &i){
        m = i.m;
        n = i.n;
    }

    void display(){

        cout << "Numbers :" << m << "," << n << "," << "Sum :" << m+n << "," <<  "Sum is: ";
        (m+n) % 2 == 0 ? cout << "Even":cout << "Odd";
        cout << endl;
    }
};


int main(){
    Integer T1;
    Integer T2(20,40);
    Integer T3(T2);

    T1.display();
    T2.display();
    T3.display();

}
