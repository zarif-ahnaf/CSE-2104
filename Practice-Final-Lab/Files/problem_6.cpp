#include<bits/stdc++.h>

using namespace std;

int main(){

    ifstream I("output.txt");
    ofstream O("output-changed.txt");

    string searchWord = "Hello";
    string replaceWord = "HLW";
    string line;
    while(getline(I,line)){
        int pos = line.find(searchWord);
        while(pos!=string::npos){
            line.replace(pos,searchWord.length(),replaceWord);
            pos = line.find(searchWord,pos+replaceWord.length());
        }

    }
}
