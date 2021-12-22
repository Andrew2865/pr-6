#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void Create(int* a, const int size, const int Low, const int High)
{
	for (int i = 0; i < size; i++)
		a[i] = Low + rand() % (High - Low + 1);
}
void Print(int* a, const int size)
{
	for (int i = 0; i < size; i++)
		cout << "a[" << setw(2) << i << " ] = " << setw(4) << a[i] << endl;
	cout << endl;
}
int Sum(int* a, const int size, int i, int z)
{
    for (i = 0; i < size; i++,a[i] % 2 != 0) 
    {      
           z += a[i];
        
    }
    return z;
}
template <typename T> // шаблон функції
T sum1(T v)
{
    T m = 0;
    if (v > m) m = v;
    return m;
}

int main()
{
    srand((unsigned)time(NULL));
    const int n = 5;
    int a[n];
    int Low = -10;
    int High = 10;
    Create(a, n, Low, High);
    Print(a, n);
    int i1 = a[0], i2 = a[1], i3 = a[2], i4 = a[3], i5 = a[4];
    cout << "  " << "Sum = " << Sum (a, n, 0, 0) << endl;
    int z = sum1(i1) + sum1(i2) + sum1(i3) + sum1(i4) + sum1(i5);
    cout << "  " << "Sum T = " << z;
    return 0;
}