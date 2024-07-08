#include <bits/stdc++.h>
using namespace std;

class CSE17{
public:
    int age;
    string name;

    inline void getdata(){
        cin >> age>> name;
    }
    inline void display(){
        cout << name << " " << age << endl;
    }
    inline void age_is_even(void);

};

inline void CSE17::age_is_even(){
        if (age %2==0) cout << "Even";
        else cout << "Odd";
        cout << endl;

    }

int main(){
    CSE17 S1,S2;
    S1.getdata();
    S1.display();
    S1.age_is_even();
}
