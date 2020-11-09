#include "pch.h"
#include <iostream>
#include "MathLibrary.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	double diag1, diag2, P, S;

	cout << "Введите длину первой диагонали ";
	cin >> diag1;
	cout << "Введите длину второй диагонали ";
	cin >> diag2;

	P = 2 * MathFuncs::MyMathFuncs::Pow(MathFuncs::MyMathFuncs::Pow(diag1, 2) + MathFuncs::MyMathFuncs::Pow(diag2, 2), 0.5);
	S = MathFuncs::MyMathFuncs::Divide(MathFuncs::MyMathFuncs::Multiply(diag1, diag2), 2.0);

	cout << "Периметр равен " << P << endl;
	cout << "Площадь равна " << S << endl;
}
