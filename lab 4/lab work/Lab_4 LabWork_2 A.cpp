// Name: Muhammad Fazil Safdar
// Department: Electrical Engineering (Power)
// Registration No: BF25NWELE0724
// Section: A

#include <iostream>   // Library for input and output
using namespace std;  // To use standard names like cout and cin

int main() {
    char grade;   // Variable to store grade (character)

    // Ask user to enter grade
    cout << "Enter your grade (A, B, C, D, F): ";
    cin >> grade;

    // Switch statement to check grade
    switch(grade) {
        case 'A':
        case 'a':
            cout << "Excellent" << endl;   // For grade A or a
            break;

        case 'B':
        case 'b':
            cout << "Very Good" << endl;   // For grade B or b
            break;

        case 'C':
        case 'c':
            cout << "Good" << endl;   // For grade C or c
            break;

        case 'D':
        case 'd':
            cout << "Pass" << endl;   // For grade D or d
            break;

        case 'F':
        case 'f':
            cout << "Fail" << endl;   // For grade F or f
            break;

        default:
            // Runs if input is not a valid grade
            cout << "Invalid Grade" << endl;
    }

    return 0;   // End of program
}
