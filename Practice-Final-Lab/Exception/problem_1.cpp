#include <bits/stdc++.h>
using namespace std;

int main(){
    try{
        int age = 15;
        if (age < 18){
            throw "You are very young";
        }

    }catch(const char*  exp){
        cout << exp;
    }


}
