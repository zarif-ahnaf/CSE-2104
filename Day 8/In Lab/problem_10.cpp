#include <bits/stdc++.h>
using namespace std;

void decryptText(string inputF, string outputF){
    ifstream input(inputF);
    ofstream output(outputF);
    char c;
    while(input.get(c)){
        c--; output.put(c);
    }
}
int main(){
    string in = "encrypted.txt";
    string out = "final.txt";
    decryptText(in,out);
}
