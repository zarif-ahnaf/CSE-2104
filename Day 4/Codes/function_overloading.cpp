#include<bits/stdc++.h>
using namespace std;

int sum(int a,int b, int c){
    return a+b+c;
 }

int sum (int a, int b) {
    return a+b;
}

float sum(float a, float b){
    return a+b;
}

int main(){


    int x1,x2;
    cout << "Enter 2 integers: ";
    cin >> x1 >> x2;
    cout << "Sum is: " << sum(x1,x2) << endl;

    int y1,y2,y3;
    cout<<"Enter 3 integers: ";
    cin >> y1 >> y2 >> y3;
    cout << "Sum is: " << sum(y1,y2,y3)  << endl;

    float z1,z2;
    cout << "Enter 2 floats:";
    cin >> z1>>z2;
    cout << setprecision(2) <<"Sum is: " << sum(z1,z2)  << endl;

}
