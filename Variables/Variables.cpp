#include <iostream>
using namespace std;

int main() {
    char operatorChar;
    double num1, num2, result;

    cout << "Enter operator (+, -, *, /): ";
    cin >> operatorChar;

    cout << "Enter two operands: ";
    cin >> num1 >> num2;

    switch (operatorChar) {
    case '+':
        result = num1 + num2;
        cout << num1 << " + " << num2 << " = " << result << endl;
        break;
    case '-':
        result = num1 - num2;
        cout << num1 << " - " << num2 << " = " << result << endl;
        break;
    case '*':
        result = num1 * num2;
        cout << num1 << " * " << num2 << " = " << result << endl;
        break;
    case '/':
        if (num2 != 0)
            result = num1 / num2;
        else {
            cout << "Error! Division by zero." << endl;
            return 1;
        }
        cout << num1 << " / " << num2 << " = " << result << endl;
        break;
    default:
        cout << "Error! Invalid operator." << endl;
        return 1;
    }

    return 0;
}
