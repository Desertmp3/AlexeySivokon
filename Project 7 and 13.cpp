#include <iostream> 
#include <Windows.h>
using namespace std;
int main() {
	setlocale(0, "");
	char texture;
	int vibor;
	int length; // ������
	int width; // ������
	int size; // ������
	int height; // ������
	cout << "��������� �������������� ������" << endl << endl;
	cout << "[1] �����" << endl;
	cout << "[2] �������" << endl;
	cout << "[3] �������������" << endl;
	cout << "[4] �����������" << endl;
	cout << "[5] �������" << endl;
	cout << "[6] �������" << endl;
	cout << "[7] ����" << endl << endl;
	cout << "��� �����: ";
	int select;
	cin >> select;

	switch (select)
	{
	case 1:
		if (select == 1) {
			system("cls");
			cout << "������ ������� " << endl << endl;
			cout << "[1]��������������" << endl;
			cout << "[2]������������" << endl << endl;
			cout << "��� �����: ";
			cin >> vibor;
			if (vibor == 1) {
				cout << "������� ������ �����: ";
				cin >> length;
				cout << "������� ������� �����: ";
				cin >> texture;
				cout << "\t";
				for (int x = 0; x < length; x++) {
					cout << texture << " ";
				}
			}
			else if (vibor == 2) {
				cout << "������� ������ �����: ";
				cin >> width;
				cout << "������� �������� �����: ";
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
		cout << "������ �������� " << endl << endl;
		cout << "[1] �����������" << endl;
		cout << "[2] ������" << endl << endl;
		cout << "��� �����: ";
		cin >> vibor;
		if (vibor == 1) {
			system("cls");
			cout << "������� ������ ��������: ";
			cin >> size;
			cout << "������� �������� ��������: ";
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
			cout << "������� ������ ��������: ";
			cin >> size;
			cout << "������� �������� ��������: ";
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
		cout << "������ �������������� " << endl << endl;
		cout << "[1] �����������" << endl;
		cout << "[2] ������" << endl << endl;
		cout << "��� �����: ";
		cin >> vibor;
		if (vibor == 1) {
			system("cls");
			cout << "������� ������ ��������������: ";
			cin >> width;
			cout << "������� ������ ��������������: ";
			cin >> length;
			cout << "������� �������� ��������������: ";
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
			cout << "������� ������ ��������������: ";
			cin >> width;
			cout << "������� ������ ��������������: ";
			cin >> length;
			cout << "������� �������� ��������������: ";
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
		cout << "������ ���������" << endl;
		cout << "������� ������ �������: ";
		cin >> size;
		cout << "������� ��������� �������: ";
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
		cout << "������ ��������" << endl;
		cout << "������� ������ ���c����:";
		cin >> size;
		cout << "������� ��������� ��������:";
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
		cout << "������" << endl;
		cout << "������� ������ �������:";
		cin >> size;
		cout << "������� ��������� �������:";
		cin >> texture;
		system("cls");

		cout << "[+]������" << endl;
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