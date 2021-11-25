#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void Create(int* b, const int size, const int Low, const int High, int i)
{
	b[i] = Low + rand() % (High - Low + 1);

		if (i < size - 1)
			Create(b, size, Low, High, i + 1);
}
void Print(int* b, const int size, int i)
{
	cout << "b[" << setw(2) << i << " ] = " << setw(4) << b[i] << endl;
	if (i < size - 1)
		Print(b, size, i + 1);
	else
		cout << endl;
}
int Find(int* b, const int size, const int x, int i)
{
	if ( b[i]%2!=0)
		return i;
	if (i < size - 1)
		return Find(b, size, x, i + 1);
	else
		return -1;
}
int main()
{
	srand((unsigned)time(NULL)); // ініціалізація генератора випадкових чисел
	const int n = 1;
	int b[n];
	int Low = -25;
	int High = 80;
	Create(b, n, Low, High, 0);
	Print(b, n, 0);
	int x;
	cout << "x =  "; cin >> x;
	int i = Find(b, n, x, 0);
	if (i > 0)
		cout << "Position found" << i << endl;
	else
		cout << "Position not found" << endl;
	return 0;
}