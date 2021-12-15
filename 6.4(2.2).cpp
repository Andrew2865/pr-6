#include <iostream>
#include <iomanip>
using namespace std;
void Print(int* a, const int size, int i)
{
	cout << setw(4) << a[i];
	if (i < size - 1)
		Print(a, size, i + 1);
	else
		cout << endl;
}
void Sort(int* a, const int size, int i, int j) // метод обміну (бульбашки)
{
	if (a[j] < a[j + 1]) // якщо порушено порядок
	{ // - обмін елементів місцями
		int tmp = a[j];
		a[j] = a[j + 1];


			a[j + 1] = tmp;
	}
	if (j < size - i - 1) // j - номер поточного елемента
		Sort(a, size, i, j + 1); // перехід до наступного елемента
	if (i < size - 1) // i - лічильник ітерацій
		Sort(a, size, i + 1, 0); // перехід до наступної ітерації
}
int main()
{
const int n;
 cout << "n = "; cin >> n;
	int a[n] = { 9, 3, 7, 5, 8 };
	Print(a, n, 0);
	Sort(a, n, 1, 0); // 1 - початкове значення лічильника ітерацій
	// 0 - початкове значення номера поточного елемента
	Print(a, n, 0);
	return 0;
}