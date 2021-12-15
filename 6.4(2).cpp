#include <iostream>
#include <iomanip>
using namespace std;
void Print(int* a, const int size)
{
	for (int i = 0; i < size; i++)
		cout << setw(4) << a[i];
	cout << endl;
}
void Sort(int* a, const int size)
{
	for (int i = 0; i < size; i++)
		for (int j = 0; j < size - i; j++)
			if (a[j] < a[j + 1])
			{
				int tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;

			}
}
int main()
{
	const int n;
	cout << "n = "; cin >> n;
	int a[n] = { 9, 4, 6, 8, 10 };
	Print(a, n);
	Sort(a, n);
	Print(a, n);
	return 0;
}