#include <iostream>
#include <ctime>
#include <Windows.h>
using namespace std;

int main() {
	int color;
	int colortext;
	setlocale(0, "");
	cout << "[+]Функции\n\n";
	cout << "[1]Очищение консоли\n";
	cout << "[2]Изменить цвет фона\n";
	cout << "[3]Изменение цвета текста\n";
	cout << "[4]Вывод размера типа данных INT\n";
	cout << "[5]Вывод размера типа данных CHAR\n";
	cout << "[6]Вывод размера типа данных DOUBLE\n";
	cout << "[7]Вывод размера типа данных FLOAT\n";
	cout << "[8]Вывод размера типа данных BOOL\n";
	cout << "[9]Вывод сообщения “Привет я функция”\n";
	cout << "[10]Вывод квадрата 5x5\n\n";
	cout << "[?]Выбор:";
	int selectfun;
	cin >> selectfun;

	if (selectfun == 1) {
		system("cls");
		setlocale(0, " ");
		cout << "[+]Вы выбрали очищение констоли" << endl;
		cout << "[!]Напишите текст который хотите очистить:";
		string text;
		cin >> text;
		cout << "[!]Отлично вот ваш текст, хотите его удалить ?\n\n";

		cout << "[1]Да.\n";
		cout << "[2]Нет.\n\n";
		cout << "[+]Выбор:";
		int vibor;
		cin >> vibor;
		if (vibor == 1) {
			system("cls");
		}
		else if (vibor == 2) {
			system("cls");
			Sleep(1000);
			cout << "Вы добрый человек <3 \n";

		}
	}
	else if (selectfun == 2) {
		system("cls");
		cout << "[+]Изменить цвет фона\n\n";
		cout << "[1]Белый\n";
		cout << "[2]Желтый\n";
		cout << "[3]Голубой\n\n";
		cout << "Ваш выбор:";
		cin >> color;
		if (color == 1) {
			system("cls");
			system("color F0");
			cout << "[+]Изменить цвет фона\n\n";
			cout << "[1]Белый\n";
			cout << "[2]Желтый\n";
			cout << "[3]Голубой\n\n";
		}
		else if (color == 2) {
			system("cls");
			system("color 60");
			cout << "[+]Изменить цвет фона\n\n";
			cout << "[1]Белый\n";
			cout << "[2]Желтый\n";
			cout << "[3]Голубой\n\n";
		}
		else if (color == 3) {
			system("cls");
			system("color 30");
			cout << "[+]Изменить цвет фона\n\n";
			cout << "[1]Белый\n";
			cout << "[2]Желтый\n";
			cout << "[3]Голубой\n\n";
		}
	}
	else if (selectfun == 3) {
		system("cls");
		cout << "[+]Изменение цвета текста\n\n";
		cout << "[1]Белый\n";
		cout << "[2]Желтый\n";
		cout << "[3]Голубой\n\n";
		cout << "[+]Выбор:";
		cin >> colortext;
		if (colortext == 1) {
			system("cls");
			system("color 0D");
			cout << "[+]Изменение цвета текста\n\n";
			cout << "[1]Лиловый\n";
			cout << "[2]Желтый\n";
			cout << "[3]Голубой\n\n";
		}
		else if (colortext == 2) {
			system("cls");
			system("color 06");
			cout << "[+]Изменение цвета текста\n\n";
			cout << "[1]Лиловый\n";
			cout << "[2]Желтый\n";
			cout << "[3]Голубой\n\n";
		}
		else if (colortext == 3) {
			system("cls");
			system("color 03");
			cout << "[+]Изменение цвета текста\n\n";
			cout << "[1]Лиловый\n";
			cout << "[2]Желтый\n";
			cout << "[3]Голубой\n\n";
		}
	}
	else if (selectfun == 4) {
		system("cls");
		cout << "Размер типа данных INT:\n\n";
		cout << "Int размером в 4 байта ";
	}
	else if (selectfun == 5) {
		system("cls");
		cout << "Размер типа данных CHAR:\n\n";
		cout << "Char размером в 1 байт ";
	}
	else if (selectfun == 6) {
		system("cls");
		cout << "Размер типа данных DOUBLE:\n\n";
		cout << "Double размером в 8 байт ";
	}
	else if (selectfun == 7) {
		system("cls");
		cout << "Размер типа данных FLOAT:\n\n";
		cout << "Float размером в 4 байта ";
	}
	else if (selectfun == 8) {
		system("cls");
		cout << "Размер типа данных BOOL:\n\n";
		cout << "Bool размером в 1 байт\n";
		cout << "Он принимает знаечение либо True либо False";
	}
	else if (selectfun == 9) {
		system("cls");
		cout << "Привет я функция !";
	}
	else if (selectfun == 10) {
		system("cls");
		cout << "[1] Квадрат 5x5\n\n";
		int height = 4;
		int width = 4;
		for (int height = 0; height <= 4; height++) {
			cout << "\t";
			for (int width = 0; width <= 4; width++) {
				cout << "# ";
			}
			cout << endl;
		}
	}
	
	else {
		system("cls");
		system("color 4");
		for (int i = 0; i < 1000000; i++) {
			Sleep(56);
			cout << "Вы ввели некорректрные данные ERROR\n Вы ввели некорректрные данные ERROR\t";

		}

	}

int _; cin >> _;
	return 0;
}