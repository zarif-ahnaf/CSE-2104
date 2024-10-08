#include<bits/stdc++.h>
using namespace std;

class student
{
protected:
    string roll_number;
    void get_number(string roll_number)
    {
        this->roll_number = roll_number;
    }
    void put_number()
    {
        cout << this->roll_number << endl;
    }
};
class test
{
protected:
    double sub1=0;
    double sub2=0;

    void get_marks(double sub1,double sub2)
    {
        this->sub1 = sub1;
        this->sub2 = sub2;
    }
    void put_mark()
    {
        cout << "Mark in subject 1:" << this->sub1 << endl;
        cout << "Mark in subject 2:" << this->sub2 << endl;
    }
};

class result:protected test,protected student
{
    double total;
public:
    void display(){
        cout << "Enter roll number:";
        string roll_number;
        cin >> roll_number;
        this->get_number(roll_number);

        double mark1,mark2;

        cout << "Enter marks 1:";
        cin >> mark1;
        cout << "Enter marks 2:";
        cin >> mark2;
        this->get_marks(mark1,mark2);


        this->put_number();
        this->put_mark();

        this->total = this->sub1 + this->sub2;
        cout << "Total Mark:" << this->total;
    }


};
int main()
{
    result r;


    r.display();

}
