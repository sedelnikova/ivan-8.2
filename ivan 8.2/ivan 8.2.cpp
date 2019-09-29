// ivan 8.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//Даны три числа. Найти сумму двух наибольших из них.

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	float A, B, C, S;
	cout << "Введите три числа: ";
	cin >> A >> B >> C;
	if ((A > B) && (A > C))
	{
		if (B > C)
		{
			S = A + B;
		}
		else
		{
			S = A + C;
		}
	}
	else
	{
		S = B + C;
	}
	


	cout << "Сумма двух наибольших = " << S << endl;
	return 0;
}

