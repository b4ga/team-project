// Лабораторная работа № 1. Вариант 7.
// Выполнил Багаев.А.И., группа ПИ-52.
#include "bagaev.h"
#include <cmath>


// Гипотенуза с катетами leg_a и leg_b
double hypotenuse(double leg_a, double  leg_b) {
	return sqrt(leg_a * leg_a +  leg_b *  leg_b);
}

// Площадь прямоугольного треугольника с катетами leg_a и leg_b
double rightTriangleArea(double leg_a, double  leg_b) {
	return leg_a *  leg_b / 2;
}

