#include <iostream>   // Library for input and output
#include <cmath>      // Library for mathematical functions like sqrt()
using namespace std;  // To use standard names like cout and cin

int main()
{
    // Declare variables to store base, perpendicular, and hypotenuse
    float base, perpendicular, hypotenuse;

    // Ask user to enter base
    cout << "Enter base: ";
    cin >> base;   // Take input from user

    // Ask user to enter perpendicular
    cout << "Enter perpendicular: ";
    cin >> perpendicular;   // Take input from user

    // Calculate hypotenuse using Pythagorean theorem
    hypotenuse = sqrt(base * base + perpendicular * perpendicular);

    // Display the result
    cout << "Hypotenuse = " << hypotenuse << endl;

    return 0;   // End of program
}
