#include <bits/stdc++.h>
using namespace std;

int main(){
    int num = 13, dem =0;
    try{
        if (dem == 0){
            throw runtime_error("FUCK YOU");
        }
    }
    catch(runtime_error &e){
        cout << e.what() << endl;
    }
}
