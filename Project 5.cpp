#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	cout << "Переводчик" << endl;
	cout << "Выберите язык перевода" << endl << endl;
	cout << "[1] - На русский" << endl;
	cout << "[2] - На английский" << endl;
	cout << "[3] - Выход" << endl << endl;
	cout << "Сделайте свой выбор : ";
	int select;
	cin >> select;

	if (select == 2) {
		cout << "Вы выбрали перевод на английский!" << endl;
		cout << "[1] - Дом " << endl;
		cout << "[2] - Убить" << endl;
		cout << "[3] - Собака" << endl;
		cout << "[4] - Кошка" << endl;
		cout << "[5] - Голова" << endl;
		cout << "[6] - Тело" << endl;
		cout << "[7] - Работать" << endl;
		cout << "[8] - Игра" << endl;
		cout << "[9] - Бежать" << endl;
		cout << "[10] - Солнце" << endl;
		cout << "[11] - Парень" << endl;
		cout << "[12] - Сумка" << endl;
		cout << "[13] - Пистолет" << endl;
		cout << "[14] - Крыша" << endl;
		cout << "[15] - Книга" << endl;
		cout << "Выберете слово которое хотите перевести:  ";
		int slovo;
		cin >> slovo;
		switch (slovo)
		{
		case 1:
			cout << endl << "Перевод Home <- Дом" << endl;
			break;
		case 2:
			cout << endl << "Перевод Kill <- Убить" << endl;
			break;
		case 3:
			cout << endl << "Перевод Dog <- Собака" << endl;
			break;
		case 4:
			cout << endl << "Перевод Cat <- Кошка" << endl;
			break;
		case 5:
			cout << endl << "Перевод Head <- Голова" << endl;
			break;
		case 6:
			cout << endl << "Перевод Body <- Тело" << endl;
			break;
		case 7:
			cout << endl << "Перевод Work <- Работа" << endl;
			break;
		case 8:
			cout << endl << "Перевод Game <- Игра" << endl;
			break;
		case 9:
			cout << endl << "Перевод Run <- Бежать" << endl;
			break;
		case 10:
			cout << endl << "Перевод Sun <- Солнце" << endl;
			break;
		case 11:
			cout << endl << "Перевод Man <- Парень" << endl;
			break;
		case 12:
			cout << endl << "Перевод Bag <- Сумка" << endl;
			break;
		case 13:
			cout << endl << "Перевод Pistol <- Пистолет" << endl;
			break;
		case 14:
			cout << endl << "Перевод Roof <- Крыша)" << endl;
			break;
		case 15:
			cout << endl << "Перевод Book <- Книга" << endl;
			break;
		default:
			cout << "Вы выбрали неверное значение";
			break;
		}
	}
	else if (select == 1) {
		int slovo;
		cout << endl << "Вы выбрали перевод на русский!" << endl;
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
		cout << "Теперь выберете слово которое хотите перевести! - ";
		cin >> slovo;

		switch (slovo)
		{
		case 1:
			cout << endl << "Перевод Home -> Дом" << endl;
			break;
		case 2:
			cout << endl << "Перевод Kill -> Убить" << endl;
			break;
		case 3:
			cout << endl << "Перевод Dog -> Собака" << endl;
			break;
		case 4:
			cout << endl << "Перевод Cat -> Кошка" << endl;
			break;
		case 5:
			cout << endl << "Перевод Head -> Голова" << endl;
			break;
		case 6:
			cout << endl << "Перевод Body -> Тело" << endl;
			break;
		case 7:
			cout << endl << "Перевод Work -> Работа" << endl;
			break;
		case 8:
			cout << endl << "Перевод Game -> Игра" << endl;
			break;
		case 9:
			cout << endl << "Перевод Run -> Бежать" << endl;
			break;
		case 10:
			cout << endl << "Перевод Sun -> Солнце" << endl;
			break;
		case 11:
			cout << endl << "Перевод Man -> Парень" << endl;
			break;
		case 12:
			cout << endl << "Перевод Bag -> Сумка" << endl;
			break;
		case 13:
			cout << endl << "Перевод Pistol -> Пистолет" << endl;
			break;
		case 14:
			cout << endl << "Перевод Roof -> Крыша" << endl;
			break;
		case 15:
			cout << endl << "Перевод Book -> Книга" << endl;
			break;
		default:
			cout << "Вы выбрали неверное значение";
			break;

		}
		
	}
	return 0;
}
