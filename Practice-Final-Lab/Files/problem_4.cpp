#include <bits/stdc++.h>
using namespace std;

int main(){
    ifstream inp("output.txt");
    string s;
    int words = 0;
    while(getline(inp,s)){
        words+= s.size();
    }
    cout << words;
}

