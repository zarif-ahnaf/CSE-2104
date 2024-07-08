#include <bits/stdc++.h>
using namespace std;


class Obj{
    int x;

public:
    void input(int y);
    bool test();
    void display(Obj x, Obj y);
};

void Obj::input(int y){
    x=y;
}

bool Obj::test(){
    int flag = 0;

    for (int i=2;i<sqrt(x);i++){
        if(x%i == 0) {
            flag = 1;
            break;
        }
    }

    if(x== 0 || x ==1) return false;
    if (flag==1) return false;
    return true;

}

void Obj::display(Obj x,Obj y){
    int result = 0;

    if(x.test() && y.test()){
        result = x.x+y.x;
    }
    else if (x.test() && !y.test()){
        result = x.x + -y.x;
    }else if(!x.test() && y.test()){
        result = -x.x + y.x;
    }else if (!x.test() && !y.test()){
        int res = 1;
        res= x.x*y.x;
        result = res;
    }

    cout << result;
}


int main(){
    int n=2;
    Obj arr[n];

    for(int i =0;i<n;i++){
        int x;
        cout << "Enter " << i+1 <<  " number: " ;
        cin >> x;
        arr[i].input(x);
    }

    arr[0].display(arr[0],arr[1]);
}
