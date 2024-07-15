#include <bits/stdc++.h>
using namespace std;


class Time {
    int hours;
    int minutes;
    int seconds;
public:
    void getTime(int h,int m, int s){
        hours = h;
        minutes = m;
        seconds = s;
    }
    void putTime(){
        cout << hours << " hours and " << minutes << " minutes and " << seconds << " seconds" << endl;
    }
    void sum(Time, Time, Time);
};

void Time::sum(Time t1,Time t2,Time t3){
    seconds = t1.seconds + t2.seconds + t3.seconds;
    minutes = seconds / 60;
    seconds = seconds % 60;
    minutes += t1.minutes + t2.minutes + t3.minutes;
    hours = minutes / 60;
    minutes = minutes % 60;
    hours += t1.hours + t2.hours + t3.hours;
}

int main(){
    Time T1,T2,T3,T4;

    T1.getTime(10,20,30);
    T2.getTime(20,30,50);
    T3.getTime(10,50,20);

    T4.sum(T1,T2,T3);
    cout << "T1=";
    T1.putTime();
    cout << "T2=";
    T2.putTime();
    cout << "T3=";
    T3.putTime();
    cout << "T4=";
    T4.putTime();

}
