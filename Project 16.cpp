#include <iostream>
#include <ctime>
#include <Windows.h>
using namespace std;

int main() {
	int color;
	int colortext;
	setlocale(0, "");
	cout << "[+]�������\n\n";
	cout << "[1]�������� �������\n";
	cout << "[2]�������� ���� ����\n";
	cout << "[3]��������� ����� ������\n";
	cout << "[4]����� ������� ���� ������ INT\n";
	cout << "[5]����� ������� ���� ������ CHAR\n";
	cout << "[6]����� ������� ���� ������ DOUBLE\n";
	cout << "[7]����� ������� ���� ������ FLOAT\n";
	cout << "[8]����� ������� ���� ������ BOOL\n";
	cout << "[9]����� ��������� ������� � ��������\n";
	cout << "[10]����� �������� 5x5\n\n";
	cout << "[?]�����:";
	int selectfun;
	cin >> selectfun;

	if (selectfun == 1) {
		system("cls");
		setlocale(0, " ");
		cout << "[+]�� ������� �������� ��������" << endl;
		cout << "[!]�������� ����� ������� ������ ��������:";
		string text;
		cin >> text;
		cout << "[!]������� ��� ��� �����, ������ ��� ������� ?\n\n";

		cout << "[1]��.\n";
		cout << "[2]���.\n\n";
		cout << "[+]�����:";
		int vibor;
		cin >> vibor;
		if (vibor == 1) {
			system("cls");
		}
		else if (vibor == 2) {
			system("cls");
			Sleep(1000);
			cout << "�� ������ ������� <3 \n";

		}
	}
	else if (selectfun == 2) {
		system("cls");
		cout << "[+]�������� ���� ����\n\n";
		cout << "[1]�����\n";
		cout << "[2]������\n";
		cout << "[3]�������\n\n";
		cout << "��� �����:";
		cin >> color;
		if (color == 1) {
			system("cls");
			system("color F0");
			cout << "[+]�������� ���� ����\n\n";
			cout << "[1]�����\n";
			cout << "[2]������\n";
			cout << "[3]�������\n\n";
		}
		else if (color == 2) {
			system("cls");
			system("color 60");
			cout << "[+]�������� ���� ����\n\n";
			cout << "[1]�����\n";
			cout << "[2]������\n";
			cout << "[3]�������\n\n";
		}
		else if (color == 3) {
			system("cls");
			system("color 30");
			cout << "[+]�������� ���� ����\n\n";
			cout << "[1]�����\n";
			cout << "[2]������\n";
			cout << "[3]�������\n\n";
		}
	}
	else if (selectfun == 3) {
		system("cls");
		cout << "[+]��������� ����� ������\n\n";
		cout << "[1]�����\n";
		cout << "[2]������\n";
		cout << "[3]�������\n\n";
		cout << "[+]�����:";
		cin >> colortext;
		if (colortext == 1) {
			system("cls");
			system("color 0D");
			cout << "[+]��������� ����� ������\n\n";
			cout << "[1]�������\n";
			cout << "[2]������\n";
			cout << "[3]�������\n\n";
		}
		else if (colortext == 2) {
			system("cls");
			system("color 06");
			cout << "[+]��������� ����� ������\n\n";
			cout << "[1]�������\n";
			cout << "[2]������\n";
			cout << "[3]�������\n\n";
		}
		else if (colortext == 3) {
			system("cls");
			system("color 03");
			cout << "[+]��������� ����� ������\n\n";
			cout << "[1]�������\n";
			cout << "[2]������\n";
			cout << "[3]�������\n\n";
		}
	}
	else if (selectfun == 4) {
		system("cls");
		cout << "������ ���� ������ INT:\n\n";
		cout << "Int �������� � 4 ����� ";
	}
	else if (selectfun == 5) {
		system("cls");
		cout << "������ ���� ������ CHAR:\n\n";
		cout << "Char �������� � 1 ���� ";
	}
	else if (selectfun == 6) {
		system("cls");
		cout << "������ ���� ������ DOUBLE:\n\n";
		cout << "Double �������� � 8 ���� ";
	}
	else if (selectfun == 7) {
		system("cls");
		cout << "������ ���� ������ FLOAT:\n\n";
		cout << "Float �������� � 4 ����� ";
	}
	else if (selectfun == 8) {
		system("cls");
		cout << "������ ���� ������ BOOL:\n\n";
		cout << "Bool �������� � 1 ����\n";
		cout << "�� ��������� ��������� ���� True ���� False";
	}
	else if (selectfun == 9) {
		system("cls");
		cout << "������ � ������� !";
	}
	else if (selectfun == 10) {
		system("cls");
		cout << "[1] ������� 5x5\n\n";
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
			cout << "�� ����� ������������� ������ ERROR\n �� ����� ������������� ������ ERROR\t";

		}

	}

int _; cin >> _;
	return 0;
}