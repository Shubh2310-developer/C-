#include <iostream>
using namespace std;

int main() {
    char operation;
    double num1, num2;

    // Displaying menu to the user
    cout << "Enter an operator (+, -, *, /): ";
    cin >> operation;

    // Asking for numbers based on the operator
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Performing calculation based on the operator
    switch (operation) {
        case '+':
            cout << "Result: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Result: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Result: " << num1 * num2 << endl;
            break;
        case '/':
            // Checking for division by zero
            if (num2 != 0) {
                cout << "Result: " << num1 / num2 << endl;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            break;
        default:
            cout << "Error: Invalid operator." << endl;
            break;
    }

    return 0;
}
