#include <bits/stdc++.h>

using namespace std;

class Student{
private:
    string name;
    string _class;
    int roll_number;
    double marks;
public:
    void set_value(string _name,string __class,int _roll_number, double _marks){
        name = _name;
        _class = __class;
        roll_number = _roll_number;
        marks = _marks;
    }

    string calculate_grade(){
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
        cout << "Name:" << name<<endl;
        cout << "Class:" << _class <<endl;
        cout << "Roll Number:" << roll_number << endl;
        cout << "Marks:" << marks << endl;
    }

    friend void update_value(Student &obj,string _name,string __class,int _roll_number, double _marks);
};

void update_value(Student &obj,string _name,string __class,int _roll_number, double _marks){
    obj.name = _name;
    obj._class = __class;
    obj.roll_number = _roll_number;
    obj.marks = _marks;
}

int main(){
    Student stu;
    stu.set_value("Zarif Ahnaf","13",23,98);
    update_value(stu,"Zarif Ahnaf Dhrubo","14",023,82);
    stu.display();
    cout << "Grade:" << stu.calculate_grade() << endl;
}
