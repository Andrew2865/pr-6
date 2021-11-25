//Лабораторна робота 6.1(1)
//Штогрина Андрія
//Варіант 9
#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;
void Create(int* b, const int size, const int Low, const int High)
{
	for (int i = 0; i < size; i++)
		b[i] = Low + rand() % (High - Low + 1);
}
void Print(int* b, const int size)
{
	for (int i = 0; i < size; i++)
		cout << "b[" << setw(2) << i << " ] = " << setw(4) << b[i] << endl;
	cout << endl;

}
int Find(int* b, const int size, const int x)
{
	for (int i = 0; i < size; i++)
		if ( b[i] % 2 != 0)
			return i;
	return -1;
}
int main()
{
	srand((unsigned)time(NULL)); // ініціалізація генератора випадкових чисел
	const int n = 1;
	int b[n];
	int Low = -25;
	int High = 80;
	Create(b, n, Low, High);
	Print(b, n);
	int x;
	cout << "x =  "; cin >> x;
	int i = Find(b, n, x);
	if (i > 0)
		cout << "Позиція знайдена " << i << endl;
	else
		cout << "Позиції не знайдено" << endl;
	return 0;
}