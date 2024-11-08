#include <bits/stdc++.h>
using namespace std;

int main(){
    try{
        int age = 15;
        if (age >= 18){
            cout << "Access Granted - you are old enough" << endl;

        }else{
            throw (age);
        }

    }
    catch(int e){
        cout << "There are errors.";
    }

}
