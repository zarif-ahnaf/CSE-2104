#include <bits/stdc++.h>
using namespace std;

int main(){
    ifstream myfile("File.txt");
    string line;
    string word;
    int counter=0;
    while(getline(myfile,line)){
        stringstream ss(line);

        while(ss >> line){
            counter++;
        }
    }
    cout << "Total words in file: "<< counter << endl;
}
