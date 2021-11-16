#include <iostream> 
#include <Windows.h>
using namespace std;
int main() {
	setlocale(0, "");
	char texture;
	int vibor;
	int length; // длинна
	int width; // ширина
	int size; // размер
	int height; // высота
	cout << "Программа геометрические фигуры" << endl << endl;
	cout << "[1] Линия" << endl;
	cout << "[2] Квадрат" << endl;
	cout << "[3] Прямоугольник" << endl;
	cout << "[4] Треугольник" << endl;
	cout << "[5] Решетка" << endl;
	cout << "[6] Крестик" << endl;
	cout << "[7] Плюс" << endl << endl;
	cout << "Ваш выбор: ";
	int select;
	cin >> select;

	switch (select)
	{
	case 1:
		if (select == 1) {
			system("cls");
			cout << "Фигура “Линия” " << endl << endl;
			cout << "[1]Горизонтальная" << endl;
			cout << "[2]Вертикальная" << endl << endl;
			cout << "Ваш выбор: ";
			cin >> vibor;
			if (vibor == 1) {
				cout << "Введите длинну линии: ";
				cin >> length;
				cout << "Введите тексуру линии: ";
				cin >> texture;
				cout << "\t";
				for (int x = 0; x < length; x++) {
					cout << texture << " ";
				}
			}
			else if (vibor == 2) {
				cout << "Введите ширину линии: ";
				cin >> width;
				cout << "Введите текстуру линии: ";
				cin >> texture;
				cout << "\t";
				for (int y = 0; y < width; y++) {
					cout << endl << texture << " ";
				}
			}
		}
		break;
	case 2:
		system("cls");
		cout << "Фигура “Квадрат” " << endl << endl;
		cout << "[1] Заполненный" << endl;
		cout << "[2] Пустой" << endl << endl;
		cout << "Ваш выбор: ";
		cin >> vibor;
		if (vibor == 1) {
			system("cls");
			cout << "Введите размер квадрата: ";
			cin >> size;
			cout << "Введите текстуру квадрата: ";
			cin >> texture;
			for (int y = 0; y < size; y++) {
				cout << "\t";
				for (int x = 0; x < size; x++) {
					cout << texture << " ";
				}
				cout << endl;
			}
		}
		else if (vibor == 2) {
			system("cls");
			cout << "Введите размер квадрата: ";
			cin >> size;
			cout << "Введите текстуру квадрата: ";
			cin >> texture;
			for (int y = 0; y < size; y++) {
				cout << "\t";
				for (int x = 0; x < size; x++) {
					if (x == 0 || x == size - 1 || y == 0 || y == size - 1)
					{
						cout << texture << " ";
					}
					else {
						cout << ". ";
					}

				}

				cout << endl;
			}
		}
		break;
	case 3:
		system("cls");
		cout << "Фигура “Прямоугольник” " << endl << endl;
		cout << "[1] Заполненный" << endl;
		cout << "[2] Пустой" << endl << endl;
		cout << "Ваш выбор: ";
		cin >> vibor;
		if (vibor == 1) {
			system("cls");
			cout << "Введите ширину прямоугольника: ";
			cin >> width;
			cout << "Введите длинну прямоугольника: ";
			cin >> length;
			cout << "Введите текстуру прямоугольника: ";
			cin >> texture;
			for (int y = 0; y < length; y++) {
				cout << "\t";
				for (int x = 0; x < width; x++) {
					cout << texture << " ";
				}
				cout << endl;
			}

		}
		else if (vibor == 2) {
			system("cls");
			cout << "Введите ширину прямоугольника: ";
			cin >> width;
			cout << "Введите длинну прямоугольника: ";
			cin >> length;
			cout << "Введите текстуру прямоугольника: ";
			cin >> texture;

			for (int y = 0; y < length; y++) {
				cout << "\t";
				for (int x = 0; x < width; x++) {
					if (y == 0 || y == length - 1 || x == 0 || x == width - 1) {
						cout << texture << " ";
					}
					else {
						cout << ". ";
					}
				}
				cout << endl;
			}
		}
		break;
	case 5:
		system("cls");
		cout << "Фигура “Решетка”" << endl;
		cout << "Введите размер решетки: ";
		cin >> size;
		cout << "Введите тексутуру решетки: ";
		cin >> texture;

		for (int y = 0; y < size; y++) {
			cout << "\t";
			if (y % 2 == 0) {
				for (int x = 0; x < size; x++) {
					if (x % 2 == 0) {
						cout << ". ";
					}
					else {
						cout << texture << " ";
					}
				}
			}
			else {
				for (int x = 0; x < size; x++)
					cout << texture << " ";
			}
			cout << "\n";
		}
		break;
	case 6:
		system("cls");
		cout << "Фигура “Крестик”" << endl;
		cout << "Введите размер креcтика:";
		cin >> size;
		cout << "Введите тексутуру крестика:";
		cin >> texture;
		for (int y = 0; y < size; y++) {
			cout << "\t";
			for (int x = 0; x < size; x++) {

				if (x == size || x == y) {
					cout << " " << texture;
				}
				else if (y == x || y == size - 1 - x) {
					cout << " " << texture;
				}
				else {
					cout << " .";
				}
			}
			cout << " " << endl;
		}
		break;
	case 7:
		system("cls");
		cout << "Плюсик" << endl;
		cout << "Введите размер плюсика:";
		cin >> size;
		cout << "Введите тексутуру плюсика:";
		cin >> texture;
		system("cls");

		cout << "[+]Плюсик" << endl;
		for (int y = 0; y < size; y++) {
			cout << "\t";
			for (int x = 0; x < size; x++) {
				if (x == size / 2) {
					cout << " " << texture;
				}
				else if (y == size / 2) {
					cout << " " << texture;
				}
				else {
					cout << " .";
				}
			}
			cout << " " << endl;
		}
			
	    default:
		break;

		int _; cin >> _;
		return 0;

	}
}