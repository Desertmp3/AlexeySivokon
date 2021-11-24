#include <iostream>
using namespace std;

int main() {
	setlocale(0, "");
	cout <<  "Месяца года" << endl << endl;
	cout << "[1] - Январь " << endl;
	cout << "[2] - Февраль " << endl;
	cout << "[3] - Март " << endl;
	cout << "[4] - Апрель " << endl;
	cout << "[5] - Май " << endl;
	cout << "[6] - Июнь " << endl;
	cout << "[7] - Июль " << endl;
	cout << "[8] - Август " << endl;
	cout << "[9] - Сентябрь " << endl;
	cout << "[10] - Октябрь " << endl;
	cout << "[11] - Ноябрь " << endl;
	cout << "[12] - Декабрь " << endl << endl;
	cout << "Выберете месяц в году: ";
	int time;
	cin >> time;

	switch (time)
	{
	case 1:
		cout << "Вы выбрали Январь.";
		break;
	case 2:
		cout << endl << "Вы выбрали Февраль.";
		break;
	case 3:
		cout << endl << "Вы выбрали Март.";
		break;
	case 4:
		cout << endl << "Вы выбрали Апрель.";
		break;
	case 5:
		cout << endl << "Вы выбрали Май.";
		break;
	case 6:
		cout << endl << "Вы выбрали Июнь.";
		break;
	case 7:
		cout << endl << "Вы выбрали Июль.";
		break;
	case 8:
		cout << endl << "Вы выбрали Август.";
		break;
	case 9:
		cout << endl << "Вы выбрали Сентябрь.";
		break;
	case 10:
		cout << endl << "Вы выбрали Октябрь.";
		break;
	case 11:
		cout << endl << "Вы выбрали Ноябрь.";
		break;
	case 12:
		cout << endl << "Вы выбрали Декабрь.";
		break;
	default:
		cout << endl << "Ошибка, вы вввели неверные данные.";
		break;
	}
	int _; cin >> _;
	return 0;
}
