#include <bits/stdc++.h>
using namespace std;

int main(){
    ifstream inp("output.txt");
    string s;
    ofstream out("output-copy.txt");

    while(getline(inp,s)){
        out << s << endl;
    }
    inp.close();
    out.close();
}

