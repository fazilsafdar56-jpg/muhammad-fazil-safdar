#include <iostream>   // Library for input and output
using namespace std;  // To use standard names like cout and cin

int main() {
    // Declare variables to store voltage, current, and resistance
    double voltage, current, resistance;

    // Ask user to enter voltage
    cout << "Enter voltage (V): ";
    cin >> voltage;   // Take input from user

    // Ask user to enter current
    cout << "Enter current (I): ";
    cin >> current;   // Take input from user

    // Check if current is not zero to avoid division by zero
    if (current != 0) {
        resistance = voltage / current;   // Calculate resistance using Ohm’s Law

        // Display the entered and calculated values
        cout << "Voltage: " << voltage << " V" << endl;
        cout << "Current: " << current << " A" << endl;
        cout << "Resistance: " << resistance << " Ohms" << endl;
    } else {
        // Error message if current is zero
        cout << "Error: Current cannot be zero!" << endl;
    }

    return 0;   // End of program
}
