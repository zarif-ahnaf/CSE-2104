#include <bits/stdc++.h>
using namespace std;

int main(){
    ifstream myfile("File.txt");
    int i=0;
    string line;
    while(getline(myfile,line)){
        i++;
    }
    cout << "The number of lines in file: " << i << endl;
}
