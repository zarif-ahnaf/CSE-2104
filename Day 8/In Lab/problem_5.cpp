#include <bits/stdc++.h>
using namespace std;

int main(){
    ifstream readfile("File.txt");
    if(!readfile){
        cout << "There is no file" <<endl;
        return 0;
    }

    ofstream writefile("Write.txt");
    string line;
    while(1){
        getline(readfile,line);
        writefile << line <<endl;
        if(readfile.eof()) break;
    }

    readfile.close();
    writefile.close();
}
