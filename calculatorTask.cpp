#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    char op;

    cout << "Enter first integer: ";
    cin >> num1;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter second integer: ";
    cin >> num2;

    int intResult;
    float floatResult;

    switch (op) {
        case '+':
            intResult = num1 + num2;
            floatResult = (float)num1 + num2;
            break;
        case '-':
            intResult = num1 - num2;
            floatResult = (float)num1 - num2;
            break;
        case '*':
            intResult = num1 * num2;
            floatResult = (float)num1 * num2;
            break;
        case '/':
            if (num2 == 0) {
                cout << "Error: Division by zero not allowed!" << endl;
                return 1;
            }
            intResult = num1 / num2;                // integer division
            floatResult = (float)num1 / num2;       // float division
            break;
        default:
            cout << "Invalid operator!" << endl;
            return 1;
    }

    cout << "\n--- Result ---" << endl;
    cout << "Integer result: " << intResult << endl;
    cout << "Float result  : " << floatResult << endl;

    return 0;
}
