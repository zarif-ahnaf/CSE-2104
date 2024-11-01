#include <bits/stdc++.h>
using namespace std;

void encryptFile(string inputFile, string outputFile){
    ifstream input(inputFile);
    ofstream output(outputFile);
    char ch;
    while(input.get(ch)){
        ch++;
        output.put(ch);
    }
}

int main(){
    string inputf = "decrypted.txt";
    string outputf = "encrypted.txt";
    encryptFile(inputf,outputf);
}
