#include <bits/stdc++.h>

using namespace std;

class CSE17{

public:
    int age;
    string name;
    void getdata(){
        cin >> age >> name;
    }
    void display(){
        cout << name << " " << age << endl;
    }

    void age_is_even(void);
};

void CSE17::age_is_even(){
    if (age%2==0) cout << "Age is even";
    else cout << "Age is Odd";
}

int main(){
    CSE17 S1,S2;

    S1.getdata();
    S1.display();
    S1.age_is_even();

}
