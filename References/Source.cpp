#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int a = 2;
	int& ra = a; // reference to "a" - ссылка на а
	// & - показывает, что объ€вл€ема€ переменна€ - это ссылка
	ra += 3;
	cout << &a << endl;
	cout << &ra << endl;
}