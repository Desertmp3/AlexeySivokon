#include <iostream> 
using namespace std;

int main() {
	setlocale(0, "");
	cout << "Времена года" << endl;
	cout << "1.Лето 2.Весна 3.Осень 4.Зима" << endl;
	cout << "Выберете время года: ";
	int time;
	cin >> time;
	if (time == 1) {
		cout << "Вы выбрали Лето";
	}
	else if (time == 2) {
		cout << "Вы выбрали Весну";
	}
	else if (time == 3) {
		cout << "Вы выбрали Осень";
	}
	else if (time == 4) {
		cout << "Вы выбрали Зиму";
	}
	else {
		cout << "Вы ничего не выбрали.";
	}
	return 0;
}
