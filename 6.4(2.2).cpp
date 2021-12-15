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
void Sort(int* a, const int size, int i, int j) // ����� ����� (���������)
{
	if (a[j] < a[j + 1]) // ���� �������� �������
	{ // - ���� �������� ������
		int tmp = a[j];
		a[j] = a[j + 1];


			a[j + 1] = tmp;
	}
	if (j < size - i - 1) // j - ����� ��������� ��������
		Sort(a, size, i, j + 1); // ������� �� ���������� ��������
	if (i < size - 1) // i - �������� ��������
		Sort(a, size, i + 1, 0); // ������� �� �������� ��������
}
int main()
{
const int n;
 cout << "n = "; cin >> n;
	int a[n] = { 9, 3, 7, 5, 8 };
	Print(a, n, 0);
	Sort(a, n, 1, 0); // 1 - ��������� �������� ��������� ��������
	// 0 - ��������� �������� ������ ��������� ��������
	Print(a, n, 0);
	return 0;
}