#include<stdio.h>
#include<stdlib.h>
#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	int n=0;
	double result = 1;

	cout << "Задача номер 117 а)" << endl;

	cout << "Введите N = " << endl;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		result *= (double)((2 * i) - 1) / (2 * i);
	}
	
	cout << "Результат = "<<result << endl;

	cout << "Задача номер 117 б)" << endl;
	int n1= 0;
	double result1 = 1;
	cout << "Введите N = " << endl;
	cin >> n1;

	for (int i = 1; i <= n1; i++)
	{
		result1 *= (double)((2 * i) - 1) / i;
	}

	cout << "Результат = " << result1 << endl;

	system("pause");
	return 0;
	
}