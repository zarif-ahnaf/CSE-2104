#include <bits/stdc++.h>

using namespace std;

class Object{
public:
    int number;

    void input(int x){
        this->number = x;
    }
    bool test(){
        int flag = 0;

        if(number == 0 || number == 1)
            return false;

        for(int i =2;i<sqrt(number);i++){
            if(number % i == 0){
                flag = 1;
                break;
            }
        };
        if(flag==1) return false;
        return true;
    }
    void display(Object x, Object y){
        int result = 0;
        if(x.test() && y.test())
            result = x.number + y.number;
        else if(x.test() && y.test()){
            result = x.number + -y.number;
        }
        else{
            result = x.number * y.number;
        }
        cout << result;

    }

};

int main(){
    Object num1,num2;
    num1.input(1);
    num2.input(2);

    num1.display(num1,num2);
}
