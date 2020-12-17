#include <iostream> 
#include <locale.h> 
#include <iomanip> 
#include <bitset>

int main()
{
	setlocale(LC_ALL, "Russian");

	// ÄÈÍÀÌÈ×ÅÑÊÈÅ ÌÀÑÑÈÂÛ

	int num_of_cols = 100, num_of_rows = 100;
	int row = 0;
	int col = 0;

	// Çàäàíèå 1

	double* ptr_double = new double; // îáúÿâëåíèå ïåðåìåííîé â äèíàìè÷åñêîé ïàìÿòè
	int array_len = 10; // ïðèñâàèâàíèå çíà÷åíèÿ
	double* ptr_double_1Darray = new double[array_len];

	// Çàäàíèå 2

	for (int row = 0; row < num_of_rows; row++)
	{
		ptr_double_1Darray[row] = 1;
	}

	// Çàäàíèå 3

	double** ptr_double_2Darray = new double* [num_of_rows]; // óêàçàòåëü íà ìàññèâ óêàçàòåëåé íà ñòðîêè (1D ìàññèâû)
	for (int row = 0; row < num_of_rows; row++)
	{
		ptr_double_2Darray[row] = new double[num_of_cols]; // âûäåëåíèå ïàìÿòè ïîä ñòðîêó - îäíîìåðíûé ìàññèâ
		for (int col = 0; col < num_of_cols; col++)
		{
			ptr_double_2Darray[row][col] = 1; // çäåñü ìîæíî ïðîâåñòè èíèöèàëèçàöèþ ìàññèâà - çàäàíèå íà÷àëüíûõ çíà÷åíèé
		}
	}

	// Çàäàíèå 4

	// Âñÿ ÎÏ çàíèìàåòñÿ çà ïàðó ñåêóíä (óòå÷êà ïàìÿòè)

	/*
	ÊÎÄ
	for (;;)
	{
		double * ptr_double_error = new double;
	}
	ÊÎÄ
	*/

	// Çàäàíèå 5

	delete ptr_double;

	delete[] ptr_double_1Darray;

	for (int row = 0; row < num_of_rows; row++)
	{
		delete[] ptr_double_2Darray[row];
	}
	delete[] ptr_double_2Darray;

	std::system("pause"); // âûçîâ ôóíêöèè system() èç ñòàíäàðòíîé áèáëèîòåêè
	return 0;
}
