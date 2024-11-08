#include <bits/stdc++.h>
using namespace std;

int main(){
    try{
        int age = 15;
        if(age>=18){
            cout << "Access granted - you are old enough"<< endl;
        }else{
            throw 505;
        }
    }catch(int myNum){
        cout << "Access denied - You must be at least 18 years old" << endl;
        cout << "Error number:" << myNum << endl;
    }
        return 0;


}
