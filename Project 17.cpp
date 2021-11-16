#include <iostream>
#include <Windows.h>
using namespace std;
#define clear system("cls");
int main();
int motion;
int sizefield = 1;
int colorX = 90;
int color0 = 90;
int counterexit = 0;

void rules() {
	cout <<
		"�������� - ������ � ���������� ���� ����� ����� ������������ �� ���������� ���� 3 �� 3 (� ��������� ��������)������ ��� �������� �������(������ �� ������������� �����).���� �� ������� ������ �����������, ������ � ���������.\n"
		"� ������������ ��������� ���� ������������ ������ � ����� �����.\n"
		"������ �� ������� ������ �� ��������� ������ ���� �����(���� ������ ��������, ������ ������ ������).������, ����������� � ��� 3 ����� ����� �� ���������, ����������� ��� ���������, ����������.\n"
		"������ �� ���������� ������ ���������� ������� ����������� ������ ���� ��� �����(������ ��� ��������), ������������ �������� ���.\n";
	int exit2;
	cout << "\n\n\t������� ����� ����� ����� ����� � ���� - ";
	cin >> exit2;
	if (exit2 >= 0) {
		clear;
		main();
	}

}
void settings() {
	int select;
	cout << "\t\t[-] ��������� ���� [-]\n";
	cout << "\t[1] - ��������� ������� ����� \n";
	cout << "\t[2] - ��������� ����� ��������\n";
	cout << "\t[3] - ��������� ����� ������\n";
	cout << "\t[4] - ��������� ������� ����\n";
	cout << "\t[5] - ����� �� ��������\n";
	cin >> select;
	switch (select)
	{
	case 1:
	{
		clear;
		cout << "\t\t - ��������� ������� ����� - \n";
		cout << "\t[1] - 3x3 \n";
		cout << "\t[2] - 4x4\n";
		cout << "\t[3] - 5x5\n";
		cin >> sizefield;
		clear;
		settings();
		break;
	}
	case 2:
	{
		clear;
		cout << "\t - ��������� ����� �������� - \n";
		cout << " - ��� ����� �� ����� \n";
		for (int i = 90; i < 97; i++) {
			cout << "\x1b[" << i << "m-> " << i << "\n";
		}
		cout << "\x1b[0m -> ��� ����� = ";
		cin >> colorX;
		if (colorX <= 89 || colorX >= 98) {
			clear;
			cout << "�� �������� � ������";
			Sleep(1000);
			clear;
			settings();
		}
		clear;
		settings();
	}
	case 3:
	{
		clear;
		cout << "\t - ��������� ����� ������ - \n";
		cout << " - ��� ����� �� ����� \n";
		for (int i = 90; i < 97; i++) {
			cout << "\x1b[" << i << "m-> " << i << "\n";
		}
		cout << "\x1b[0m -> ��� ����� = ";
		cin >> color0;
		if (color0 <= 89 || color0 >= 98) {
			clear;
			cout << "�� �������� � ������";
			Sleep(1000);
			clear;
			settings();
		}
		clear;
		settings();
	}
	case 4:
	{
		clear;
		cout << "\t\t - ��������� ������� ���� - \n";
		cout << "\t[1] ->\x1b[" << colorX << "mX\x1b[0m - ����� ���\x1b[" << color0 << "m 0\x1b[0m - ������ ���.\n";
		cout << "\t[2] ->\x1b[" << color0 << "m0\x1b[0m - ������ ��� \x1b[" << colorX << "m�\x1b[0m - ������ ���\n";
		cin >> motion;
		if (motion == 1) {
			clear;
			settings();
		}
		else if (motion == 2) {
			clear;
			settings();
		}
		else {
			clear;
			Sleep(1000);
			cout << "������";
			Sleep(1000);
			clear;
			settings();
		}
		break;
	}
	case 5:
	{
		clear;
		main();
		break;
	}
	default:
		cout << "�� ������� ������!";
		Sleep(1000);
		clear;
		settings;
		break;
	}

}
void play() {
	bool turn;
	bool win = true;
	if (motion == 1) {
		turn = true;
	}
	else if (motion == 2) {
		turn = false;
	}
	else {
		turn = true;
	}
	if (sizefield == 1) {
		const int line = 3;
		const int column = 3;
		int field[3][3] = {
			{0,0,0},
			{0,0,0},
			{0,0,0}
		};

		while (win == true) {
			clear;
			int select;
			for (int y = 0; y < column; y++) {
				cout << "\t";
				for (int i = 0; i < line; i++) {
					if (field[y][i] == 0) {
						cout << "# ";
					}
					else if (field[y][i] == 1) {
						cout << "\x1b[" << colorX << "mX \x1b[0m";
					}
					else if (field[y][i] == 2) {
						cout << "\x1b[" << color0 << "m0 \x1b[0m";
					}
				}
				cout << "\n";
			}
			if (turn == true) {
				cout << "\n\t������ ����� ������� - ";
				cin >> select;
				turn = false;
			}
			else if (turn == false) {
				cout << "\n\t������ ����� ����� - ";
				cin >> select;
				turn = true;
			}
			switch (select)
			{
			case 1:
				if (field[0][0] != 1 && field[0][0] != 2) {
					!turn ? field[0][0] = 1 : field[0][0] = 2;
				}
				else { turn = !turn; }
				break;
			case 2:
				if (field[0][1] != 1 && field[0][1] != 2) {
					!turn ? field[0][1] = 1 : field[0][1] = 2;
				}
				else { turn = !turn; }
				break;
			case 3:
				if (field[0][2] != 1 && field[0][2] != 2) {
					!turn ? field[0][2] = 1 : field[0][2] = 2;
				}
				else { turn = !turn; }
				break;
			case 4:
				if (field[1][0] != 1 && field[1][0] != 2) {
					!turn ? field[1][0] = 1 : field[1][0] = 2;
				}
				else { turn = !turn; }
				break;
			case 5:
				if (field[1][1] != 1 && field[1][1] != 2) {
					!turn ? field[1][1] = 1 : field[1][1] = 2;
				}
				else { turn = !turn; }
				break;
			case 6:
				if (field[1][2] != 1 && field[1][2] != 2) {
					!turn ? field[1][2] = 1 : field[1][2] = 2;
				}
				else { turn = !turn; }
				break;
			case 7:
				if (field[2][0] != 1 && field[2][0] != 2) {
					!turn ? field[2][0] = 1 : field[2][0] = 2;
				}
				else { turn = !turn; }
				break;
			case 8:
				if (field[2][1] != 1 && field[2][1] != 2) {
					!turn ? field[2][1] = 1 : field[2][1] = 2;
				}
				else { turn = !turn; }
				break;
			case 9:
				if (field[2][2] != 1 && field[2][2] != 2) {
					!turn ? field[2][2] = 1 : field[2][2] = 2;
				}
				else { turn = !turn; }
				break;
			default:
				cout << "�� ����� ����������� ��������";
				break;
			}
			if (field[0][0] == 1 && field[0][1] == 1 && field[0][2] == 1 ||
				field[1][0] == 1 && field[1][1] == 1 && field[1][2] == 1 ||
				field[2][0] == 1 && field[2][1] == 1 && field[2][2] == 1 ||
				field[0][0] == 1 && field[1][0] == 1 && field[2][0] == 1 ||
				field[0][1] == 1 && field[1][1] == 1 && field[2][1] == 1 ||
				field[0][2] == 1 && field[1][2] == 1 && field[2][2] == 1 ||
				field[0][0] == 1 && field[1][1] == 1 && field[2][2] == 1 ||
				field[0][2] == 1 && field[1][1] == 1 && field[2][0] == 1)
			{
				clear;
				win = false;
				cout << "\n\n\t\t����������� ������� ��������� !!!";
			}
			else if (field[0][0] == 2 && field[0][1] == 2 && field[0][2] == 2 ||
				field[1][0] == 2 && field[1][1] == 2 && field[1][2] == 2 ||
				field[2][0] == 2 && field[2][1] == 2 && field[2][2] == 2 ||
				field[0][0] == 2 && field[1][0] == 2 && field[2][0] == 2 ||
				field[0][1] == 2 && field[1][1] == 2 && field[2][1] == 2 ||
				field[0][2] == 2 && field[1][2] == 2 && field[2][2] == 2 ||
				field[0][0] == 2 && field[1][1] == 2 && field[2][2] == 2 ||
				field[0][2] == 2 && field[1][1] == 2 && field[2][0] == 2)
			{
				clear;
				win = false;
				cout << "\n\n\t\t����������� ������� �0�������!!!";
			}
			else if (field[0][0] != 0 && field[0][1] != 0 && field[0][2] != 0 &&
				field[1][0] != 0 && field[1][1] != 0 && field[1][2] != 0 &&
				field[2][0] != 0 && field[2][1] != 0 && field[2][2] != 0) {
				clear;
				win = false;
				cout << "\n\n\t\t�����, ���������-���������...";
			}
		}
	}
	else if (sizefield == 2) {
		const int line = 4;
		const int column = 4;
		int field[4][4] = {
			{0,0,0,0},
			{0,0,0,0},
			{0,0,0,0},
			{0,0,0,0}
		};

		while (win == true) {
			clear;
			int select;
			for (int y = 0; y < column; y++) {
				cout << "\t";
				for (int i = 0; i < line; i++) {
					if (field[y][i] == 0) {
						cout << "# ";
					}
					else if (field[y][i] == 1) {
						cout << "\x1b[" << colorX << "mX \x1b[0m";
					}
					else if (field[y][i] == 2) {
						cout << "\x1b[" << color0 << "m0 \x1b[0m";
					}
				}
				cout << "\n";
			}
			if (turn == true) {
				cout << "\n\t������ ����� ������� - ";
				cin >> select;
				turn = false;
			}
			else if (turn == false) {
				cout << "\n\t������ ����� ����� - ";
				cin >> select;
				turn = true;
			}
			switch (select)
			{
			case 1:
				if (field[0][0] != 1 && field[0][0] != 2) {
					!turn ? field[0][0] = 1 : field[0][0] = 2;
				}
				else { turn = !turn; }
				break;
			case 2:
				if (field[0][1] != 1 && field[0][1] != 2) {
					!turn ? field[0][1] = 1 : field[0][1] = 2;
				}
				else { turn = !turn; }
				break;
			case 3:
				if (field[0][2] != 1 && field[0][2] != 2) {
					!turn ? field[0][2] = 1 : field[0][2] = 2;
				}
				else { turn = !turn; }
				break;
			case 4:
				if (field[0][3] != 1 && field[0][3] != 2) {
					!turn ? field[0][3] = 1 : field[0][3] = 2;
				}
				else { turn = !turn; }
				break;
			case 5:
				if (field[1][0] != 1 && field[1][0] != 2) {
					!turn ? field[1][0] = 1 : field[1][0] = 2;
				}
				else { turn = !turn; }
				break;
			case 6:
				if (field[1][1] != 1 && field[1][1] != 2) {
					!turn ? field[1][1] = 1 : field[1][1] = 2;
				}
				else { turn = !turn; }
				break;
			case 7:
				if (field[1][2] != 1 && field[1][2] != 2) {
					!turn ? field[1][2] = 1 : field[1][2] = 2;
				}
				else { turn = !turn; }
				break;
			case 8:
				if (field[1][3] != 1 && field[1][3] != 2) {
					!turn ? field[1][3] = 1 : field[1][3] = 2;
				}
				else { turn = !turn; }
				break;
			case 9:
				if (field[2][0] != 1 && field[2][0] != 2) {
					!turn ? field[2][0] = 1 : field[2][0] = 2;
				}
				else { turn = !turn; }
				break;
			case 10:
				if (field[2][1] != 1 && field[2][1] != 2) {
					!turn ? field[2][1] = 1 : field[2][1] = 2;
				}
				else { turn = !turn; }
				break;
			case 11:
				if (field[2][2] != 1 && field[2][2] != 2) {
					!turn ? field[2][2] = 1 : field[2][2] = 2;
				}
				else { turn = !turn; }
				break;
			case 12:
				if (field[2][3] != 1 && field[2][3] != 2) {
					!turn ? field[2][3] = 1 : field[2][3] = 2;
				}
				else { turn = !turn; }
				break;
			case 13:
				if (field[3][0] != 1 && field[3][0] != 2) {
					!turn ? field[3][0] = 1 : field[3][0] = 2;
				}
				else { turn = !turn; }
				break;
			case 14:
				if (field[3][1] != 1 && field[3][1] != 2) {
					!turn ? field[3][1] = 1 : field[3][1] = 2;
				}
				else { turn = !turn; }
				break;
			case 15:
				if (field[3][2] != 1 && field[3][2] != 2) {
					!turn ? field[3][2] = 1 : field[3][2] = 2;
				}
				else { turn = !turn; }
				break;
			case 16:
				if (field[3][3] != 1 && field[3][3] != 2) {
					!turn ? field[3][3] = 1 : field[3][3] = 2;
				}
				else { turn = !turn; }
				break;
			default:
				cout << "�� ����� ����������� ��������";
				break;
			}
			if (field[0][0] == 1 && field[0][1] == 1 && field[0][2] == 1 && field[0][3] == 1 ||
				field[1][0] == 1 && field[1][1] == 1 && field[1][2] == 1 && field[1][3] == 1 ||
				field[2][0] == 1 && field[2][1] == 1 && field[2][2] == 1 && field[2][3] == 1 ||
				field[3][0] == 1 && field[3][1] == 1 && field[3][2] == 1 && field[3][3] == 1
				)
			{
				clear;
				win = false;
				cout << "\n\n\t\t����������� ������� ��������� !!!";
			}
			else if (field[0][0] == 1 && field[1][0] == 1 && field[2][0] == 1 && field[3][0] == 1 ||
				field[0][1] == 1 && field[1][1] == 1 && field[2][1] == 1 && field[3][1] == 1 ||
				field[0][2] == 1 && field[1][2] == 1 && field[2][2] == 1 && field[3][2] == 1 ||
				field[0][3] == 1 && field[1][3] == 1 && field[2][3] == 1 && field[3][3] == 1) {
				clear;
				win = false;
				cout << "\n\n\t\t����������� ������� ��������� !!!";
			}
			else if (field[0][0] == 1 && field[1][1] == 1 && field[2][2] == 1 && field[3][3] == 1 ||
				field[3][0] == 1 && field[1][3] == 1 && field[2][2] == 1 && field[0][3] == 1) {
				clear;
				win = false;
				cout << "\n\n\t\t����������� ������� ��������� !!!";
			}
			else if (
				field[0][0] == 2 && field[0][1] == 2 && field[0][2] == 2 && field[0][3] == 2 ||
				field[1][0] == 2 && field[1][1] == 2 && field[1][2] == 2 && field[1][3] == 2 ||
				field[2][0] == 2 && field[2][1] == 2 && field[2][2] == 2 && field[2][3] == 2 ||
				field[3][0] == 2 && field[3][1] == 2 && field[3][2] == 2 && field[3][3] == 2 ||
				field[0][0] == 2 && field[1][0] == 2 && field[2][0] == 2 && field[3][0] == 2 ||
				field[0][1] == 2 && field[1][1] == 2 && field[2][1] == 2 && field[3][1] == 2 ||
				field[0][2] == 2 && field[1][2] == 2 && field[2][2] == 2 && field[3][2] == 2 ||
				field[0][3] == 2 && field[1][3] == 2 && field[2][3] == 2 && field[3][3] == 2 ||
				field[0][0] == 2 && field[1][1] == 2 && field[2][2] == 2 && field[3][3] == 2 ||
				field[3][0] == 2 && field[1][3] == 2 && field[2][2] == 2 && field[0][3] == 2)
			{
				clear;
				win = false;
				cout << "\n\n\t\t����������� ������� �0�������!!!";
			}
			else if (
				field[0][0] != 0 && field[0][1] != 0 && field[0][2] != 0 && field[0][3] != 0 &&
				field[1][0] != 0 && field[1][1] != 0 && field[1][2] != 0 && field[1][3] != 0 &&
				field[2][0] != 0 && field[2][1] != 0 && field[2][2] != 0 && field[2][3] != 0 &&
				field[3][0] != 0 && field[3][1] != 0 && field[3][2] != 0 && field[3][3] != 0)
			{
				clear;
				win = false;
				cout << "\n\n\t\t�����, ���������-���������...";
			}
		}
	}
	else if (sizefield == 3) {
		const int line = 5;
		const int column = 5;
		int field[5][5] = {
			{0,0,0,0,0},
			{0,0,0,0,0},
			{0,0,0,0,0},
			{0,0,0,0,0},
			{0,0,0,0,0},
		};
		while (win == true) {
			clear;
			int select;
			for (int y = 0; y < column; y++) {
				cout << "\t";
				for (int i = 0; i < line; i++) {
					if (field[y][i] == 0) {
						cout << "# ";
					}
					else if (field[y][i] == 1) {
						cout << "\x1b[" << colorX << "mX \x1b[0m";
					}
					else if (field[y][i] == 2) {
						cout << "\x1b[" << color0 << "m0 \x1b[0m";
					}
				}
				cout << "\n";
			}
			if (turn == true) {
				cout << "\n\t������ ����� ������� - ";
				cin >> select;
				turn = false;
			}
			else if (turn == false) {
				cout << "\n\t������ ����� ����� - ";
				cin >> select;
				turn = true;
			}
			switch (select)
			{
			case 1:
				if (field[0][0] != 1 && field[0][0] != 2) {
					!turn ? field[0][0] = 1 : field[0][0] = 2;
				}
				else { turn = !turn; }
				break;
			case 2:
				if (field[0][1] != 1 && field[0][1] != 2) {
					!turn ? field[0][1] = 1 : field[0][1] = 2;
				}
				else { turn = !turn; }
				break;
			case 3:
				if (field[0][2] != 1 && field[0][2] != 2) {
					!turn ? field[0][2] = 1 : field[0][2] = 2;
				}
				else { turn = !turn; }
				break;
			case 4:
				if (field[0][3] != 1 && field[0][3] != 2) {
					!turn ? field[0][3] = 1 : field[0][3] = 2;
				}
				else { turn = !turn; }
				break;
			case 5:
				if (field[0][4] != 1 && field[0][4] != 2) {
					!turn ? field[0][4] = 1 : field[0][4] = 2;
				}
				else { turn = !turn; }
				break;
			case 6:
				if (field[1][0] != 1 && field[1][0] != 2) {
					!turn ? field[1][0] = 1 : field[1][0] = 2;
				}
				else { turn = !turn; }
				break;
			case 7:
				if (field[1][1] != 1 && field[1][1] != 2) {
					!turn ? field[1][1] = 1 : field[1][1] = 2;
				}
				else { turn = !turn; }
				break;
			case 8:
				if (field[1][2] != 1 && field[1][2] != 2) {
					!turn ? field[1][2] = 1 : field[1][2] = 2;
				}
				else { turn = !turn; }
				break;
			case 9:
				if (field[1][3] != 1 && field[1][3] != 2) {
					!turn ? field[1][3] = 1 : field[1][3] = 2;
				}
				else { turn = !turn; }
				break;
			case 10:
				if (field[1][4] != 1 && field[1][4] != 2) {
					!turn ? field[1][4] = 1 : field[1][4] = 2;
				}
				else { turn = !turn; }
				break;
			case 11:
				if (field[2][0] != 1 && field[2][0] != 2) {
					!turn ? field[2][0] = 1 : field[2][0] = 2;
				}
				else { turn = !turn; }
				break;
			case 12:
				if (field[2][1] != 1 && field[2][1] != 2) {
					!turn ? field[2][1] = 1 : field[2][1] = 2;
				}
				else { turn = !turn; }
				break;
			case 13:
				if (field[2][2] != 1 && field[2][2] != 2) {
					!turn ? field[2][2] = 1 : field[2][2] = 2;
				}
				else { turn = !turn; }
				break;
			case 14:
				if (field[2][3] != 1 && field[2][3] != 2) {
					!turn ? field[2][3] = 1 : field[2][3] = 2;
				}
				else { turn = !turn; }
				break;
			case 15:
				if (field[2][4] != 1 && field[2][4] != 2) {
					!turn ? field[2][4] = 1 : field[2][4] = 2;
				}
				else { turn = !turn; }
				break;
			case 16:
				if (field[3][0] != 1 && field[3][0] != 2) {
					!turn ? field[3][0] = 1 : field[3][0] = 2;
				}
				else { turn = !turn; }
				break;
			case 17:
				if (field[3][1] != 1 && field[3][1] != 2) {
					!turn ? field[3][1] = 1 : field[3][1] = 2;
				}
				else { turn = !turn; }
				break;
			case 18:
				if (field[3][2] != 1 && field[3][2] != 2) {
					!turn ? field[3][2] = 1 : field[3][2] = 2;
				}
				else { turn = !turn; }
				break;
			case 19:
				if (field[3][3] != 1 && field[3][3] != 2) {
					!turn ? field[3][3] = 1 : field[3][3] = 2;
				}
				else { turn = !turn; }
				break;
			case 20:
				if (field[3][4] != 1 && field[3][4] != 2) {
					!turn ? field[3][4] = 1 : field[3][4] = 2;
				}
				else { turn = !turn; }
				break;
			case 21:
				if (field[4][0] != 1 && field[4][0] != 2) {
					!turn ? field[4][0] = 1 : field[4][0] = 2;
				}
				else { turn = !turn; }
				break;
			case 22:
				if (field[4][1] != 1 && field[4][1] != 2) {
					!turn ? field[4][1] = 1 : field[4][1] = 2;
				}
				else { turn = !turn; }
				break;
			case 23:
				if (field[4][2] != 1 && field[4][2] != 2) {
					!turn ? field[4][2] = 1 : field[4][2] = 2;
				}
				else { turn = !turn; }
				break;
			case 24:
				if (field[4][3] != 1 && field[4][3] != 2) {
					!turn ? field[4][3] = 1 : field[4][3] = 2;
				}
				else { turn = !turn; }
				break;
			case 25:
				if (field[4][4] != 1 && field[4][4] != 2) {
					!turn ? field[4][4] = 1 : field[4][4] = 2;
				}
				else { turn = !turn; }
				break;
			default:
				cout << "�� ����� ����������� ��������";
				break;
			}
			if (field[0][0] == 1 && field[0][1] == 1 && field[0][2] == 1 && field[0][3] == 1 && field[0][4] == 1 ||
				field[1][0] == 1 && field[1][1] == 1 && field[1][2] == 1 && field[1][3] == 1 && field[1][4] == 1 ||
				field[2][0] == 1 && field[2][1] == 1 && field[2][2] == 1 && field[2][3] == 1 && field[2][4] == 1 ||
				field[3][0] == 1 && field[3][1] == 1 && field[3][2] == 1 && field[3][3] == 1 && field[3][4] == 1 ||
				field[4][0] == 1 && field[4][1] == 1 && field[4][2] == 1 && field[4][3] == 1 && field[4][4] == 1
				)
			{
				clear;
				win = false;
				cout << "\n\n\t\t����������� ������� ��������� !!!";
			}
			else if (
				field[0][0] == 1 && field[1][0] == 1 && field[2][0] == 1 && field[3][0] == 1 && field[4][0] == 1 ||
				field[0][1] == 1 && field[1][1] == 1 && field[2][1] == 1 && field[3][1] == 1 && field[4][1] == 1 ||
				field[0][2] == 1 && field[1][2] == 1 && field[2][2] == 1 && field[3][2] == 1 && field[4][2] == 1 ||
				field[0][3] == 1 && field[1][3] == 1 && field[2][3] == 1 && field[3][3] == 1 && field[4][3] == 1 ||
				field[0][4] == 1 && field[1][4] == 1 && field[2][4] == 1 && field[3][4] == 1 && field[4][4] == 1)
			{
				clear;
				win = false;
				cout << "\n\n\t\t����������� ������� ��������� !!!";
			}
			else if (
				field[0][0] == 1 && field[1][1] == 1 && field[2][2] == 1 && field[3][3] == 1 && field[4][4] == 1 ||
				field[4][0] == 1 && field[1][3] == 1 && field[2][2] == 1 && field[3][1] == 1 && field[4][0] == 1
				)
			{
				clear;
				win = false;
				cout << "\n\n\t\t����������� ������� ��������� !!!";
			}
			else if (
				field[0][0] == 2 && field[0][1] == 2 && field[0][2] == 2 && field[0][3] == 2 && field[0][4] == 2 ||
				field[1][0] == 2 && field[1][1] == 2 && field[1][2] == 2 && field[1][3] == 2 && field[1][4] == 2 ||
				field[2][0] == 2 && field[2][1] == 2 && field[2][2] == 2 && field[2][3] == 2 && field[2][4] == 2 ||
				field[3][0] == 2 && field[3][1] == 2 && field[3][2] == 2 && field[3][3] == 2 && field[3][4] == 2 ||
				field[3][0] == 2 && field[3][1] == 2 && field[3][2] == 2 && field[3][3] == 2 && field[4][4] == 2 ||

				field[0][0] == 2 && field[1][0] == 2 && field[2][0] == 2 && field[3][0] == 2 && field[4][0] == 2 ||
				field[0][1] == 2 && field[1][1] == 2 && field[2][1] == 2 && field[3][1] == 2 && field[4][1] == 2 ||
				field[0][2] == 2 && field[1][2] == 2 && field[2][2] == 2 && field[3][2] == 2 && field[4][2] == 2 ||
				field[0][3] == 2 && field[1][3] == 2 && field[2][3] == 2 && field[3][3] == 2 && field[4][3] == 2 ||
				field[0][3] == 2 && field[1][3] == 2 && field[2][3] == 2 && field[3][3] == 2 && field[4][4] == 2 ||

				field[0][0] == 2 && field[1][1] == 2 && field[2][2] == 2 && field[3][3] == 2 && field[4][4] == 2 ||
				field[4][0] == 2 && field[1][3] == 2 && field[2][2] == 2 && field[3][1] == 2 && field[0][4] == 2

				)
			{
				clear;
				win = false;
				cout << "\n\n\t\t����������� ������� �0�������!!!";
			}
			else if (
				field[0][0] != 0 && field[0][1] != 0 && field[0][2] != 0 && field[0][3] != 0 && field[0][4] != 0 &&
				field[1][0] != 0 && field[1][1] != 0 && field[1][2] != 0 && field[1][3] != 0 && field[1][4] != 0 &&
				field[2][0] != 0 && field[2][1] != 0 && field[2][2] != 0 && field[2][3] != 0 && field[2][4] != 0 &&
				field[3][0] != 0 && field[3][1] != 0 && field[3][2] != 0 && field[3][3] != 0 && field[3][4] != 0 &&
				field[4][0] != 0 && field[4][1] != 0 && field[4][2] != 0 && field[4][3] != 0 && field[4][4] != 0

				)


			{
				clear;
				win = false;
				cout << "\n\n\t\t�����, ���������-���������...";
			}
		}

	}
}

int main()
{
	setlocale(0, "");
	int select;

	cout << "\n\n\t\t[-] ��������������� � ���� ��������-������ [-]\n\n";

	cout << "\t[1] ������ \n";
	cout << "\t[2] ���������\n";
	cout << "\t[3] �������\n";
	cout << "\t[4] �����..\n ";

	cin >> select;

	switch (select)
	{
	case 1:
		system("cls");
		play();
		break;
	case 2:
		system("cls");
		settings();
		break;
	case 3:
		clear;
		rules();
		break;
	case 4:
		system("cls");
		if (counterexit == 3) {
			clear;
			cout << "\n\n\n\t\t\t������ ���..";
		}
		else {
			clear;
			counterexit++;
			main();
		}
		break;
	default:
		clear;
		main();

		break;
	}


	int _;  cin >> _;
	return 0;
}