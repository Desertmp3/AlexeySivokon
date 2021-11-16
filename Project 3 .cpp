#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");

	double num1;
	double num2;
	double result;
	char operation;

	cout << "Калькулятор." << endl;
	cout << "Введите число: ";
	cin >> num1;
	cout << "Введите второе число: ";
	cin >> num2;
	cout << "Введите операцию ";
	cin >> operation;

	if (operation == '+') {
		cout << "\t";
		result = num1 + num2;
		cout << num1 << operation << num2 << "=" << result;
	}
	else if (operation == '-') {
		cout << "\t";
		result = num1 - num2;
		cout << num1 << operation << num2 << "=" << result;
	}
	else if (operation == '*')
	{
		cout << "\t";
		result = num1 * num2;
		cout << num1 << operation << num2 << "=" << result;
	}
	else if (operation == '/' && num2 != 0) {
		cout << "\t";
		result = num1 / num2;
		cout << num1 << operation << num2 << "=" << result;
	}
	else if (operation == '/' && num2 == 0) {
		cout << "Нельзя делить на ноль !";
	}
	else if (operation == '%') {
		cout << "\t";
		result = int(num1) % int(num2);
		cout << num1 << operation << num2 << "=" << result;
	}
	else {
		cout << "Вы не ввели неккоректрые данные !";
	}
	int _; cin >> _;
	return 0;
}