// Name:muhammad fazil safdar
// Department: Electrical Engineering (Power)
// Registration No: BF25NWELE0724
// Section: A

#include <iostream>
using namespace std;

int main() {
    char grade;

    cout << "Enter your grade (A, B, C, D, F): ";
    cin >> grade;

    switch(grade) {
        case 'A':
        case 'a':
            cout << "Excellent";
            break;

        case 'B':
        case 'b':
            cout << "Very Good";
            break;

        case 'C':
        case 'c':
            cout << "Good";
            break;

        case 'D':
        case 'd':
            cout << "Pass";
            break;

        case 'F':
        case 'f':
            cout << "Fail";
            break;

        default:
            cout << "Invalid Grade";
    }

    return 0;
}
