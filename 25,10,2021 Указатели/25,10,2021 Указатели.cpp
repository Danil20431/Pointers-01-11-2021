#include <iostream>

using namespace std;

//#define POINTERS_BASICS
#define POINTERS_AND_ARRAYS

int main()
{
	setlocale(LC_ALL, "");

	int a = 2;
	int* pa = &a;

#ifdef POINTERS_BASICS
	cout << a << endl;   // выводим значение переменной 'a'
	cout << &a << endl;  // выводим адрес переменной 'a' прямо при выводе
	cout << pa << endl;  // выводим адрес переменной 'a' хранящийся в указателе
	cout << &pa << endl; // выводим адрес 'pa'
	cout << *pa << endl; // выводим значение лежащее по адресу  
#endif // POINTERS_BASICS

#ifdef POINTERS_AND_ARRAYS
	const int n = 5;
	int arr[n] = { 3,5,8,13,21 };
	cout << arr << endl;

	for (int i = 0; i < n; i++)
	{
		cout << arr + i << endl;
		cout << *(arr + i) << "\t";
	}
#endif // POINTERS_AND_ARRAYS



	return 0;
}