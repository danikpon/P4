#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, c;
		cout << "Введите значение а: ";
		cin >> a;
		cout << "\nВведите значение b: ";
		cin >> b;

	c = a;
	a = b;
	b = c;
		cout << "\n Обмен с помощью дополнительной переменной \n" << "a = " << a << "\nb = " << b;

	a = a + b;
	b = a - b;
	a = a - b;
		cout << "\n Обмен без помощи дополнительной переменной \n" << "a = " << a << "\nb = " << b;
	return 0;
}