#include <bits/stdc++.h>
using namespace std;

class Student{
    string name;
    string _class;
    int roll_number;
    double marks;

public:
    void input(string _name,string __class,int _roll_number,double _marks){
        name = _name,_class = __class,roll_number = _roll_number,marks = _marks;
    }
    string grade(){
        if (marks >= 80) return "A+";
        else if (marks >= 75 && marks < 80) return "A";
        else if (marks >= 70 && marks < 75 )return "A-";
        else if (marks >= 65 && marks < 70) return "B+";
        else if (marks >= 60 && marks < 65) return "B";
        else if (marks >= 55 && marks < 60) return "B-";
        else if (marks >= 50 && marks < 55) return "C+";
        else if (marks >= 45 && marks < 50) return "C";
        else if (marks >= 40 && marks < 45) return "D";
        else if (marks <40) return "F";
    }

    void display(){
        cout << "Name: " <<name << endl;
        cout << "Class: " << _class << endl;
        cout << "Roll: " << roll_number << endl;
        cout << "Marks: " << marks << endl;
    }
};


int main(){
    string name;
    string _class;
    int roll_number;
    double marks;

    cout << "Enter Student Name: ";
    getline(cin, name);
    cout << "Enter Student class: ";
    cin >> _class;
    cout << "Enter Student roll number: ";
    cin >> roll_number;
    cout << "Enter Student marks:";
    cin >> marks;

    Student stu;
    stu.input(name,_class,roll_number,marks);
    cout << "Grade: " << stu.grade() << endl;
    stu.display();

}

