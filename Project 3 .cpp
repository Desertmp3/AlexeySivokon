#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");

	double num1;
	double num2;
	double result;
	char operation;

	cout << "�����������." << endl;
	cout << "������� �����: ";
	cin >> num1;
	cout << "������� ������ �����: ";
	cin >> num2;
	cout << "������� �������� ";
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
		cout << "������ ������ �� ���� !";
	}
	else if (operation == '%') {
		cout << "\t";
		result = int(num1) % int(num2);
		cout << num1 << operation << num2 << "=" << result;
	}
	else {
		cout << "�� �� ����� ������������ ������ !";
	}
	int _; cin >> _;
	return 0;
}