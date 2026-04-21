// Name: Muhammad Fazil Safdar
// Department: Electrical Engineering (Power)
// Registration No: BF25NWELE0724
// Section: A

#include <iostream>   // Library for input and output
using namespace std;  // To use standard names like cout and cin

int main()
{
    int day;   // Variable to store day number

    // Ask user to enter a number between 1 and 7
    cout << "Enter day number (1-7): ";
    cin >> day;

    // Switch statement to determine the day
    switch(day)
    {
        case 1:
            cout << "Monday";   // If input is 1
            break;

        case 2:
            cout << "Tuesday";  // If input is 2
            break;

        case 3:
            cout << "Wednesday";  // If input is 3
            break;

        case 4:
            cout << "Thursday";  // If input is 4
            break;

        case 5:
            cout << "Friday";  // If input is 5
            break;

        case 6:
            cout << "Saturday";  // If input is 6
            break;

        case 7:
            cout << "Sunday";  // If input is 7
            break;

        default:
            // Runs if input is not between 1 and 7
            cout << "Invalid input! Please enter a number between 1 and 7.";
    }

    return 0;   // End of program
}
