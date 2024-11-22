#include <bits/stdc++.h>
using namespace std;

// Class for temperature conversions
class TemperatureConverter
{
public:
    // Convert Celsius to Fahrenheit
    double convert(float celsius)
    {
        return ((double)celsius * 9 / 5) + 32;
    }

    // Convert Fahrenheit to Celsius
    double convert(double fahrenheit)
    {
        return (fahrenheit - 32) * 5 / 9;
    }

    // Convert Celsius to Kelvin
    double convert(int celsius)
    {
        return (double)celsius + 273.15;
    }
};

int main()
{
    TemperatureConverter converter;
    int choice;
    double result;

    cout << "Temperature Conversion Menu:" << endl;
    cout << "1. Celsius to Fahrenheit" << endl;
    cout << "2. Fahrenheit to Celsius" << endl;
    cout << "3. Celsius to Kelvin" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        float t1;
        cout << "Enter temperature in Celsius: ";
        cin >> t1;
        result = converter.convert(t1);
        cout << "Temperature in Fahrenheit: " << result << endl;
        break;

    case 2:
        double t2;
        cout << "Enter temperature in Fahrenheit: ";
        cin >> t2;
        result = converter.convert(t2);
        cout << "Temperature in Celsius: " << result << endl;
        break;

    case 3:
        int t3;
        cout << "Enter temperature in Celsius: ";
        cin >> t3;
        result = converter.convert(t3);
        cout << "Temperature in Kelvin: " << result << endl;
        break;

    default:
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
