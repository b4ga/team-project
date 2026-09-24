// Командный проект. Группа ПИ-52.
// Написать ниже вариант, фамилию.
// Команда: Багаев (в. 7, техлид).
#include <iostream>
#include <windows.h>
#include "bagaev.h"
// === БЛОК ПОДКЛЮЧЕНИЙ: каждый участник добавляет свой заголовочный файл ===
// === КОНЕЦ БЛОКА ПОДКЛЮЧЕНИЙ ===
using namespace std;


int main() {
	SetConsoleOutputCP(CP_UTF8);
	int choice;
	double legA, legB;
	do {
		cout << "\n=== Командный проект: сборник расчётов ===\n";
		// === БЛОК МЕНЮ: каждый участник добавляет свои пункты ===
		cout << "1. Нахождение гипотенузы в прямоугольном треугольнике\n";
		cout << "2. Нахождение площади прямоугольного треугольника\n";
		// === КОНЕЦ БЛОКА МЕНЮ ===
		cout << "0. Выход\n";
		cout << "Выберите пункт: ";
		cin >> choice;

		switch (choice) {
		// === БЛОК ОБРАБОТКИ: каждый участник добавляет свои case ===
		case 1:

			do {
				cout << "Введите катеты a и b: ";
				cin >> legA >> legB;

				if (legA <= 0 || legB <= 0) {
					cout << "Введены неположительные значения катетов.\n";
				}
			} while (legA <= 0 || legB <= 0);

			cout << "Гипотенуза = " << hypotenuse(legA, legB) << "\n";
			break;
		case 2:

			do {
				cout << "Введите катеты a и b: ";
				cin >> legA >> legB;

				if (legA <= 0 || legB <= 0) {
					cout << "Введены неположительные значения катетов.\n";
				}
			} while (legA <= 0 || legB <= 0);

			cout << "Площадь = " << rightTriangleArea(legA, legB) << "\n";
			break;
		// === КОНЕЦ БЛОКА ОБРАБОТКИ ===
		case 0:
			cout << "Работа завершена.\n";
			break;
		default:
			cout << "Такого пункта нет.\n";
		}

	} while (choice != 0);

	return 0;
}