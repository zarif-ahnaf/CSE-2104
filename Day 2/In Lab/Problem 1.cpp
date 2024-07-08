#include <bits/stdc++.h>
using namespace std;


class Obj{
    int x;
    int result =0 ;

public:
    void input(int y);
    void test(int num);
    void display(int y);
};

void Obj::input(int y){
    x=y;
}

void Obj::test(int num){
    int flag = 0;
    bool first_prime=false;
    bool second_prime=false;

    for (int i=2;i<sqrt(x);i++){
        if(x%i == 0) {
            flag = 1;
            break;
        }
    }
    if(x== 0 || x ==1 ) first_prime = false;
    else{
        if (flag==1) first_prime = false;
        else first_prime = true;
    }

    flag = 0;
    for(int i =2;i<=sqrt(num);i++){
        if(num%i==0) {
            flag = 1;
            break;
        }
    }
    if(num == 0 || num ==1 ) second_prime = false;
    else{
        if(flag==1) second_prime = false;
        else second_prime = true;
    }

    // cout << first_prime << ":" <<second_prime << endl;
    if(first_prime && second_prime){
        result = x+num;
    }
    else if (first_prime && !second_prime){
        result = x + -num;
    }else if(!first_prime && second_prime){
        result = -x + num;
    }else if (!first_prime && !second_prime){
        int y = 1;
        y = x*num;
        result = y;
    }

}

void Obj::display(int y){
    test(y);

    cout << result;
}


int main(){
    Obj first,second;

    int x,y,z;
    cout << "Enter First number: " ;
    cin >> x;
    first.input(x);

    cout << "Enter second number: ";
    cin >> y;

    second.input(y);


    first.display(y);
}
