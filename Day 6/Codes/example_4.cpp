#include <bits/stdc++.h>

using namespace std;

class Person {
private:
    int id;
    char name[50];

public:
    void setDetails(int id, char* n) {
        this->id = id;
        strcpy(name, n);
    }

    void displayDetails() {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
    }
};

class Student : private Person {
private:
    char course[50];
    int fee;

public:
    void setCourseDetails(char* c, int f) {
        strcpy(course, c);
        fee = f;
    }

    void displayCourseDetails() {
        this->displayDetails();  // Calling Person's function
        cout << "Course: " << course << endl;
        cout << "Fee: " << fee << endl;
    }

    void inputPersonDetails(int i,  char* n) {
        setDetails(i, n);  // Calling Person's function
    }
};

int main() {
    Student student;
    student.inputPersonDetails(101, "John Doe");
    student.setCourseDetails("Computer Science", 3000);

    student.displayCourseDetails();

    return 0;
}
