#include <bits/stdc++.h>
using namespace std;

int main(){
    ifstream inp("output.txt");
    string s;
    int line = 0;
    while(getline(inp,s)){
        line++;
    }
    cout << line;
}
