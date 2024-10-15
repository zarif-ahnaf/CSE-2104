#include <bits/stdc++.h>
using namespace std;

class Marks
{
protected:
    int rollNo;
    string name;
    static int count;
    int marks;

public:
    Marks()
    {
        rollNo = ++count;
    }


    void setDetails(string studentName)
    {
        name = studentName;
    }

    void displayDetails()
    {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
    }
};
int Marks::count = 0;

class Physics : public Marks
{

public:
    void setPhysicsMarks(int marks)
    {
        this->marks = marks;
    }

    void displayPhysicsMarks()
    {
        cout << "Physics Marks: " << this->marks << endl;
    }
};

class Chemistry : public Marks
{

public:
    void setChemistryMarks(int marks)
    {
        this->marks = marks;
    }

    void displayChemistryMarks()
    {
        cout << "Chemistry Marks: " << this->marks << endl;
    }
};

class Mathematics : public Marks
{
public:
    void setMathMarks(int marks)
    {
        this->marks = marks;
    }

    void displayMathMarks()
    {
        cout << "Mathematics Marks: " << this->marks << endl;
    }
};

int main()
{
    int numStudents;
    cout << "Enter the number of stuents:";
    cin >> numStudents;

    double totalMark[numStudents];
    Physics physics[numStudents];
    Chemistry chemistry[numStudents];
    Mathematics mathematics[numStudents];

    double totalPhysicsMarks=  0;
    double totalChemistryMarks = 0;
    double totalMathematicsMarks = 0;

    for (int i = 0; i < numStudents; i++)
    {
        string name;
        int pMarks, cMarks, mMarks;
        cout << "Enter name of student " << (i + 1) << ": ";
        cin >> name;
        physics[i].setDetails(name);
        cout << "Enter marks in Physics: ";
        cin >> pMarks;
        physics[i].setPhysicsMarks(pMarks);

        cout << "Enter marks in Chemistry: ";
        cin >> cMarks;
        chemistry[i].setChemistryMarks(cMarks);

        cout << "Enter marks in Mathematics: ";
        cin >> mMarks;
        mathematics[i].setMathMarks(mMarks);

        totalChemistryMarks += cMarks;
        totalPhysicsMarks += pMarks;
        totalMathematicsMarks  += mMarks;

        totalMark[i] += (pMarks+cMarks+mMarks);
    }

    for (int i = 0; i < numStudents; i++)
    {
        physics[i].displayDetails();
        physics[i].displayPhysicsMarks();
        chemistry[i].displayChemistryMarks();
        mathematics[i].displayMathMarks();
        cout << "Total mark: " << totalMark[i] << endl;
        cout << endl;
    }

    cout << "Average mark in physics: " << totalPhysicsMarks/numStudents << endl;
    cout << "Average mark in chemistry: " << totalChemistryMarks/numStudents << endl;
    cout << "Average mark in mathematics: " << totalMathematicsMarks/numStudents << endl;

    return 0;
}
