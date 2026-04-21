#include <iostream>   // For input and output
#include <cmath>      // For sqrt() function
using namespace std;

int main()
{
    // Declare variables
    float a, b, c;        // Coefficients of quadratic equation
    float root1, root2;   // Roots of equation
    float D;              // Discriminant

    // Take input from user
    cout << "Enter coefficient a: ";
    cin >> a;

    cout << "Enter coefficient b: ";
    cin >> b;

    cout << "Enter coefficient c: ";
    cin >> c;

    // Calculate discriminant
    D = b * b - 4 * a * c;

    // Check if 'a' is zero (not a quadratic equation)
    if (a == 0) {
        cout << "Error: Not a quadratic equation!" << endl;
    }
    else {
        // Check nature of roots
        if (D > 0) {
            // Two real and different roots
            root1 = (-b + sqrt(D)) / (2 * a);
            root2 = (-b - sqrt(D)) / (2 * a);

            cout << "Root 1 = " << root1 << endl;
            cout << "Root 2 = " << root2 << endl;
        }
        else if (D == 0) {
            // Two equal roots
            root1 = -b / (2 * a);

            cout << "Both roots are equal." << endl;
            cout << "Root = " << root1 << endl;
        }
        else {
            // Complex roots (sqrt of negative number not real)
            cout << "Roots are complex (not real)." << endl;
        }
    }

    return 0;   // End of program
}
