#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	
	cout << "Array" << endl << endl;
	cout << "[1]INT \n";
	cout << "[2]SHORT \n";
	cout << "[3]LONG \n";
	cout << "[4]FLOAT\n";
	cout << "[5]DOUBLE \n";
	cout << "[6]CHAR \n";
	cout << "[7]BOOL \n";
	cout << "[8]STRING \n\n";
	cout << "Ваш выбор: ";
	int selectarr;
	cin >> selectarr;

	if (selectarr == 1) {
		system("cls");
		const int ARR = 10;
		int arrint[ARR]{ 12,21,33,45,56,67,78,89,91,103 };
		cout << "[+]Значения INT\n\n";
		for (int i = 0; i < ARR; i++) {
			cout << " " << "Arrint: " << arrint[i] << endl;
		}
	}
	else if (selectarr == 2) {
		system("cls");
		const int ARR = 10;
		short arrshort[ARR]{ 1421,232,361,4421,5412,623,761,8213,9512,10123 };
		cout << "[+]Значение SHORT:\n\n";
		for (int i = 0; i < ARR; i++) {
			cout << " " << "Arrshort:" << arrshort[i] << endl;
		}
	}
	else if (selectarr == 3) {
		system("cls");
		const int ARR = 10;
		long arrlong[ARR]{ 1321,5112,33232,4325,55213,632,741,5534,1239,10213 };
		cout << "[+]Значение LONG:" << endl;
		for (int i = 0; i < ARR; i++) {
			cout << " " << "Arrlong:" << arrlong[i] << endl;
		}
	}
	else if (selectarr == 4) {
		system("cls");
		const int ARR = 10;
		float arrfloat[ARR]{ 1.5,2.5,3.8,4.5,5.9,6.5,7.3,8.1,9.8,1.6 };
		cout << "[+]Значение FLOAT:" << endl;
		for (int i = 0; i < ARR; i++) {
			cout << " " << "Arrfloat:" << arrfloat[i] << endl << endl;
		}
	}
	else if (selectarr == 5) {
		system("cls");
		const int ARR = 10;
		double arrdouble[ARR]{ 1.5,2.5,3.8,4.5,5.9,6.5,7.3,8.1,9.8,1.6 };
		cout << "[+]Значение DOUBLE:" << endl;
		for (int i = 0; i < ARR; i++) {
			cout << " " << "Arrdouble:" << arrdouble[i] << endl << endl;
		}
	}
	else if (selectarr == 6) {
		system("cls");
		const int ARR = 10;
		char arrchar[ARR]{ 1,2,3,4,5,6,7,8,9,10 };
		cout << "[+]Значение CHAR:" << endl;
		for (int i = 0; i < ARR; i++) {
			cout << " " << "Arrchar:" << arrchar[i] << endl << endl;
		}
	}
	else if (selectarr == 7) {
		system("cls");
		const int ARR = 10;
		bool arrbool[ARR]{ true, false, true, false, false, false, true, true, true , true };
		cout << "[+]Значение BOOL:" << endl;
		for (int i = 0; i < ARR; i++) {
			cout << " " << "Arrbool:" << arrbool[i] << endl << endl;
		}
	}
	else if (selectarr == 8) {
		system("cls");
		const int ARR = 10;
		string arrstring[ARR]{ "один","два","три","четыре","пять","шесть","семь","восемь","девять","десять" };
		cout << "[+]Значение STRING:" << endl;
		for (int i = 0; i < ARR; i++) {
			cout << " " << "Arrstring:" << arrstring[i] << endl << endl;
		}
	}
	return 0;
}
