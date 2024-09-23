#include <bits/stdc++.h>

using namespace std;

class Complex_Number
{
    double real;
    double imaginary;

public:
    double Magnitude()
    {
        return sqrt(pow(real, 2) + pow(imaginary, 2));
    }

    void input(double real, double imaginary)
    {
        this->real = real;
        this->imaginary = imaginary;
    }

    void Add(double real, double imaginary)
    {
        this->real += real;
        this->imaginary += imaginary;
    }

    void subtraction(double real, double imaginary)
    {
        this->real -= real;
        this->imaginary -= imaginary;
    }

    void multiply(double real, double imaginary)
    {
        double tempReal = this->real * real - this->imaginary * imaginary;
        double tempImg = this->real * imaginary + this->imaginary * real;
        this->real = tempReal;
        this->imaginary = tempImg;
    }

    void display()
    {
        cout << "The complex number is :";
        cout << this->real << " + " << this->imaginary << "i" << endl;
    }
};

int main()
{
    double x1, y1;
    Complex_Number C1;

    cout << "Enter Complex Number. Format (3 1) for \'3 + 1i\':";
    cin >> x1 >> y1;
    C1.input(x1, y1);

    cout << "Enter a complex number to add: Format (3 1) for \'3 + 1i\':";
    cin >> x1 >> y1;
    C1.Add(x1, y1);

    cout << "Enter a complex number to substract: Format (3 1) for \'3 + 1i\':";
    cin >> x1 >> y1;
    C1.subtraction(x1, y1);

    cout << "Enter a complex number to multiply: Format (3 1) for \'3 + 1i\':";
    cin >> x1 >> y1;
    C1.multiply(x1, y1);

    C1.display();

    cout << "Magnitude is :" << C1.Magnitude() << endl;
    return 0;
}