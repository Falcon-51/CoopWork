
#include <iostream>
#include "funcs.h"
using namespace std;

int main(int argc, char* argv[])
{
	int count; // переменная для выбора в switch
	double a, b,Res = 0; // переменные для хранения операндов
	cout << "Vvedite pervoe chislo: ";
	cin >> a;

	cout << "Vvedite vtoroe chislo: ";
	cin >> b;
	cout << "Vibirite deistvie: 1-slojenie; 2-vichitanie; 3-ymnojenie; 4-delenie: ";
	cin >> count;
	switch (count) // начало оператора switch
	{
	case 1: 
	{
		Res = MySum(a,b);// выполнить сложение
		cout << "Summa = " << Res << endl;
		break;
	}
	case 2:
	{
		 // выполнить вычитание
		break;
	}
	case 3: // 
	{
		 // выполнить умножение
		break;
	}
	case 4: // 
	{
		 // выполнить деление
		break;
	}
	default: 
		cout << "Nepravilni vvod" << endl;
	}
	system("pause");
	return 0;
}
