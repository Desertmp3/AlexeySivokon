#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	cout << "����������" << endl;
	cout << "�������� ���� ��������" << endl << endl;
	cout << "[1] - �� �������" << endl;
	cout << "[2] - �� ����������" << endl;
	cout << "[3] - �����" << endl << endl;
	cout << "�������� ���� ����� : ";
	int select;
	cin >> select;

	if (select == 2) {
		cout << "�� ������� ������� �� ����������!" << endl;
		cout << "[1] - ��� " << endl;
		cout << "[2] - �����" << endl;
		cout << "[3] - ������" << endl;
		cout << "[4] - �����" << endl;
		cout << "[5] - ������" << endl;
		cout << "[6] - ����" << endl;
		cout << "[7] - ��������" << endl;
		cout << "[8] - ����" << endl;
		cout << "[9] - ������" << endl;
		cout << "[10] - ������" << endl;
		cout << "[11] - ������" << endl;
		cout << "[12] - �����" << endl;
		cout << "[13] - ��������" << endl;
		cout << "[14] - �����" << endl;
		cout << "[15] - �����" << endl;
		cout << "�������� ����� ������� ������ ���������:  ";
		int slovo;
		cin >> slovo;
		switch (slovo)
		{
		case 1:
			cout << endl << "������� Home <- ���" << endl;
			break;
		case 2:
			cout << endl << "������� Kill <- �����" << endl;
			break;
		case 3:
			cout << endl << "������� Dog <- ������" << endl;
			break;
		case 4:
			cout << endl << "������� Cat <- �����" << endl;
			break;
		case 5:
			cout << endl << "������� Head <- ������" << endl;
			break;
		case 6:
			cout << endl << "������� Body <- ����" << endl;
			break;
		case 7:
			cout << endl << "������� Work <- ������" << endl;
			break;
		case 8:
			cout << endl << "������� Game <- ����" << endl;
			break;
		case 9:
			cout << endl << "������� Run <- ������" << endl;
			break;
		case 10:
			cout << endl << "������� Sun <- ������" << endl;
			break;
		case 11:
			cout << endl << "������� Man <- ������" << endl;
			break;
		case 12:
			cout << endl << "������� Bag <- �����" << endl;
			break;
		case 13:
			cout << endl << "������� Pistol <- ��������" << endl;
			break;
		case 14:
			cout << endl << "������� Roof <- �����)" << endl;
			break;
		case 15:
			cout << endl << "������� Book <- �����" << endl;
			break;
		default:
			cout << "�� ������� �������� ��������";
			break;
		}
	}
	else if (select == 1) {
		int slovo;
		cout << endl << "�� ������� ������� �� �������!" << endl;
		cout << "[1] - Home " << endl;
		cout << "[2] - Kill" << endl;
		cout << "[3] - Dog" << endl;
		cout << "[4] - Cat" << endl;
		cout << "[5] - Head" << endl;
		cout << "[6] - Body" << endl;
		cout << "[7] - Work" << endl;
		cout << "[8] - Game" << endl;
		cout << "[9] - Run" << endl;
		cout << "[10] - Sun" << endl;
		cout << "[11] - Man" << endl;
		cout << "[12] - Bag" << endl;
		cout << "[13] - Pistol" << endl;
		cout << "[14] - Roof" << endl;
		cout << "[15] - Book" << endl;
		cout << "������ �������� ����� ������� ������ ���������! - ";
		cin >> slovo;

		switch (slovo)
		{
		case 1:
			cout << endl << "������� Home -> ���" << endl;
			break;
		case 2:
			cout << endl << "������� Kill -> �����" << endl;
			break;
		case 3:
			cout << endl << "������� Dog -> ������" << endl;
			break;
		case 4:
			cout << endl << "������� Cat -> �����" << endl;
			break;
		case 5:
			cout << endl << "������� Head -> ������" << endl;
			break;
		case 6:
			cout << endl << "������� Body -> ����" << endl;
			break;
		case 7:
			cout << endl << "������� Work -> ������" << endl;
			break;
		case 8:
			cout << endl << "������� Game -> ����" << endl;
			break;
		case 9:
			cout << endl << "������� Run -> ������" << endl;
			break;
		case 10:
			cout << endl << "������� Sun -> ������" << endl;
			break;
		case 11:
			cout << endl << "������� Man -> ������" << endl;
			break;
		case 12:
			cout << endl << "������� Bag -> �����" << endl;
			break;
		case 13:
			cout << endl << "������� Pistol -> ��������" << endl;
			break;
		case 14:
			cout << endl << "������� Roof -> �����" << endl;
			break;
		case 15:
			cout << endl << "������� Book -> �����" << endl;
			break;
		default:
			cout << "�� ������� �������� ��������";
			break;

		}
		
	}
	return 0;
}