#include <bits/stdc++.h>
using namespace std;

// Exception class for OutOfRange
class OutOfRangeException : public exception {
public:
    const char* what() const noexcept override {
        return "Marks out of valid range (0-100)";
    }
};

/**
 * Function: calculateAverage
 * --------------------------
 * Calculates the average of four marks.
 *
 * Preconditions:
 * - Marks must be within the range [0, 100].
 *
 * Postconditions:
 * - Returns the average of the marks as a float.
 *
 * Invariants:
 * - Throws an exception if any mark is out of range.
 */
float calculateAverage(float mark1, float mark2, float mark3, float mark4) {
    if (mark1 < 0 || mark1 > 100 || mark2 < 0 || mark2 > 100 ||
        mark3 < 0 || mark3 > 100 || mark4 < 0 || mark4 > 100) {
        throw OutOfRangeException();
    }
    return (mark1 + mark2 + mark3 + mark4) / 4;
}

int main() {
    try {
        float m1, m2, m3, m4;
        cout << "Enter marks for four courses: ";
        cin >> m1 >> m2 >> m3 >> m4;

        float average = calculateAverage(m1, m2, m3, m4);
        cout << "Average marks: " << average << endl;
    } catch (const OutOfRangeException& e) {
        cerr << "Error: " << e.what() << endl;
    }
    return 0;
}
