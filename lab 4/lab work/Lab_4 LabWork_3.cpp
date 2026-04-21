// Name: Muhammad Fazil Safdar
// Department: Electrical Engineering (Power)
// Registration No: BF25NWELE0724
// Section: A

#include <iostream>   // Library for input and output
using namespace std;

int main()
{
    int choice;        // Variable to store user's choice
    double value, result;   // Variables for input value and result

    // Display menu
    cout << "UNIT CONVERTER" << endl;
    cout << "1 -> Kilometers to Meters" << endl;
    cout << "2 -> Meters to Centimeters" << endl;
    cout << "3 -> Kilograms to Grams" << endl;
    cout << "4 -> Celsius to Fahrenheit" << endl;

    // Take user choice
    cout << "Enter choice: ";
    cin >> choice;

    // Switch statement to perform selected conversion
    switch(choice)
    {
        case 1:
            // Convert kilometers to meters
            cout << "Enter Kilometers Value: ";
            cin >> value;
            result = value * 1000;
            cout << "Result: " << result << " meters" << endl;
            break;

        case 2:
            // Convert meters to centimeters
            cout << "Enter Meters value: ";
            cin >> value;
            result = value * 100;
            cout << "Result: " << result << " centimeters" << endl;
            break;

        case 3:
            // Convert kilograms to grams
            cout << "Enter Kilograms value: ";
            cin >> value;
            result = value * 1000;
            cout << "Result: " << result << " grams" << endl;
            break;

        case 4:
            // Convert Celsius to Fahrenheit
            cout << "Enter Celsius value: ";
            cin >> value;
            result = (value * 9/5) + 32;
            cout << "Result: " << result << " Fahrenheit" << endl;
            break;

        default:
            // If user enters invalid choice
            cout << "Invalid choice" << endl;
    }

    return 0;   // End of program
}
