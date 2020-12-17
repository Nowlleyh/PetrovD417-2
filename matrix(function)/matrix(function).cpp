#include <iostream>
#include <string>
#include <locale.h>

using namespace std;
double a[2];
double b[2];
double scalar[1];
void vectorone()
{
	cout << "Ââåäèòå êîîðäèíàòû âåêòîðà a: " << endl;
	cout << "x1: ";
	cin >> a[0];
	cout << "y1: ";
	cin >> a[1];
}

void vectortwo()
{
	cout << "Ââåäèòå êîîðäèíàòû âåêòîðà b: " << endl;
	cout << "x2: ";
	cin >> b[0];
	cout << "y2: ";
	cin >> b[1];
}


double result()
{
	scalar[0] = (a[0] * b[0]) + (a[1] * b[1]);

	return 0;
}


double output()
{
	cout << "Ñêàëÿðíîå ïðîèçâåäåíèå âåêòîðîâ: " << endl;
	cout << scalar[0] << endl;

	return 0;
}


int main()
{
	setlocale(LC_ALL, "Russian");

	vectorone();
	vectortwo();
	result();
	output();


	return 0;

	system("pause");
}