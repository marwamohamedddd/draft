#include <iostream>
#include <cmath>   // for sqrt() and pow()
using namespace std;

int main() {

    int choice;        // stores user's menu choice
    double num1, num2; // for most operations

    do {
        // Display menu
        cout << "\n===== Simple Calculator =====\n";
        cout << "1. Addition (+)\n";
        cout << "2. Subtraction (-)\n";
        cout << "3. Multiplication (*)\n";
        cout << "4. Division (/)\n";
        cout << "5. Power (^)\n";
        cout << "6. Square Root (√)\n";
        cout << "7. Modulus (%)\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        // Handle user's choice
        switch(choice) {

            case 1: // Addition
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Result = " << num1 + num2 << endl;
                break;

            case 2: // Subtraction
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Result = " << num1 - num2 << endl;
                break;

            case 3: // Multiplication
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Result = " << num1 * num2 << endl;
                break;

            case 4: // Division
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;

                // Check division by zero
                if(num2 != 0)
                    cout << "Result = " << num1 / num2 << endl;
                else
                    cout << "Error: Cannot divide by zero!\n";
                break;

            case 5: // Power
                cout << "Enter base and exponent: ";
                cin >> num1 >> num2;
                cout << "Result = " << pow(num1, num2) << endl;
                break;

            case 6: // Square Root
                cout << "Enter a number: ";
                cin >> num1;

                // Check for negative input
                if(num1 >= 0)
                    cout << "Result = " << sqrt(num1) << endl;
                else
                    cout << "Error: Cannot take sqrt of negative number!\n";
                break;

            case 7: { // Modulus (works with integers only)
                int a, b; // separate variables for integer operation
                cout << "Enter two integers: ";
                cin >> a >> b;

                if(b != 0)
                    cout << "Result = " << a % b << endl;
                else
                    cout << "Error: Cannot divide by zero!\n";
                break;
            }

            case 0: // Exit program
                cout << "Exiting program...\n";
                break;

            default: // Invalid input
                cout << "Invalid choice! Please try again.\n";
        }

    } while(choice != 0); // repeat until user chooses to exit

    return 0;
}