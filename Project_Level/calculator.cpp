#include <iostream>

using namespace std;

int calculator(int a, int b, int operation) {

	int c = 0;

	switch (operation) {
	case 1:
		cout << "\nResult: " << (c = a + b) << endl;
		break;
	case 2:
		cout << "\nResult: " << (c = a - b) << endl;
		break;
	case 3:
		cout << "\nResult: " << (c = a * b) << endl;
		break;
	case 4:
		cout << "\nResult: " << (c = a / b) << endl;
		break;
	default:
		cout << "\nInvalid Operation" << endl;
		return 0;
	}
	return c;
}

void select() {

	int selected = 0, num1 = 0, num2 = 0;

	cout << "Select one option:\n";
	cout << "1: Sum, 2: Subtration, 3: Multiplication, 4: Division\n";
	cin >> selected;
	cout << "Select the first number:";
	cin >> num1;
	cout << "\nSelect the second number:";
	cin >> num2;
	calculator(num1, num2, selected);

}