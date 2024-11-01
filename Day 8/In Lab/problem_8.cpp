#include <bits/stdc++.h>
using namespace std;
int main(){
    ifstream file1("test-1.txt");
    ifstream file2("test-2.txt");
    ofstream fileO("merged.txt");
    string line;
    while(getline(file1,line)){
        fileO << line <<endl;
    }
    while(getline(file2,line)){
        fileO << line <<endl;
    }
    file1.close();
    file2.close();
    fileO.close();
}
