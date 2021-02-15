#include<iostream>
using namespace std;


#define POINTERS_AND_ARRAYS
void main()
{
	setlocale(LC_ALL, "");


	const int n = 5;
	int arr[n] = { 3,5,8,13,21 };
	cout << *arr << endl;
	for (int i = 0; i < n; i++)
	{
		cout << *(arr + i) << "\t";
	}
	cout << endl;
	int* p_arr = arr;
	for (int i = 0; i < n; i++)
	{
		cout << *p_arr++ << "\t";
	}
		cout << endl;

	/*---------------------------------
	+, -. ++, --
	char* - 1 byte
	short* - 2 byte
	int* -  4 byte
	double* - 8 Byte
	------------------------------------
	*/

}






