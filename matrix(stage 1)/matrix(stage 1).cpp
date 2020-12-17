#include<iostream>
#include<locale.h>

// Ñêàëÿðíîå ïðîèçâåäåíèå âåêòîðîâ
int main()
{
	setlocale(LC_ALL, "Russian");
	int i;
	double a[3];
	double b[3];
	double s = 0;
	std::cout << "Ââåäèòå êîîðäèíàòû âåêòîðà a:" << std::endl;
	for (i = 0; i < 3; i++)
		std::cin >> a[i];
	std::cout << "Ââåäèòå êîîðäèíàòû âåêòîðà b:" << std::endl;
	for (i = 0; i < 3; i++)
		std::cin >> b[i];
	for (i = 0; i < 3; i++)
		s += a[i] * b[i];
	std::cout << "Ñêàëÿðíîå ïðîèçâåäåíèå âåêòîðîâ = " << s << std::endl;

	std::system("pause");

	return 0;
}