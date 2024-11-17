#include <bits/stdc++.h>
using namespace std;



int main(){
    ifstream t("output.txt");
    ofstream enc("enc.txt");
    string s;
    while(getline(t,s)){
        for(int i=0;i<s.size();i++){
            s[i]++;
        }
        enc << s << endl;
    }

}
