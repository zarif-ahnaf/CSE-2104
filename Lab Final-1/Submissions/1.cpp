#include <bits/stdc++.h>

using namespace std;

class Student
{
private:
    string StudentID;
    string name;
    double grade;
public:
    Student(){
        this->StudentID ="0";
        this->name = "";
        this->grade = 0.00;
    }
    Student(string StudentID,string name,double grade)
    {
        this->StudentID = StudentID;
        this->name = name;
        this->grade = grade;
    }

    friend void displayStudentInfo(Student &obj);
};
void displayStudentInfo(Student &obj)
{
    cout << "Student ID:" << obj.StudentID <<endl;
    cout << "Student Name:" << obj.name<<endl;
    cout << "Student Grade:" << obj.grade<<endl;
};
int main()
{

    int n;
    cout << "Enter the number of students:";
    cin >> n;
    Student arr[n];
    for(int i=0;i<n;i++){
        string StudentID;
        string name;
        double grade;

        cout << "Enter student information for student " << i+1 << endl;
        cout << "StudentID: ";
        cin >> StudentID;

        cout << "Name: ";
        cin >> name;

        cout << "Grade: ";
        cin>> grade;

        Student s(StudentID,name,grade);
        arr[i] = s;
    }


    for(int i =0;i<n;i++){
        cout << "Displaying information for student " << i+1 << endl;
        displayStudentInfo(arr[i]);
        cout << endl;
    }
}
