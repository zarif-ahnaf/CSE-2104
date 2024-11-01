#include <bits/stdc++.h>
using namespace std;

int main(){
    ifstream inputfile("input.txt");
    ofstream outputfile("output.txt");
    string searchword = "C++";
    string replaceword = "CPP";
    string line;
    while(getline(inputfile,line)){
        size_t pos = line.find(searchword);
        while(pos != string::npos){
            line.replace(pos,searchword.length(), replaceword);
            pos = line.find(searchword,pos+replaceword.length());
        };
        outputfile << line << endl;
    }
    inputfile.close();
    outputfile.close();
}
