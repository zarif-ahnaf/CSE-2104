#include <bits/stdc++.h>
using namespace std;

int main(){
    ifstream output("output.txt");
    string line;
    while(getline(output,line)){
        cout << line;
    }

    output.close();
}
