#include<stdio.h>
#include<stdlib.h>
#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	int n=0;
	double result = 1;

	cout << "������ ����� 117 �)" << endl;

	cout << "������� N = " << endl;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		result *= (double)((2 * i) - 1) / (2 * i);
	}
	
	cout << "��������� = "<<result << endl;

	cout << "������ ����� 117 �)" << endl;
	int n1= 0;
	double result1 = 1;
	cout << "������� N = " << endl;
	cin >> n1;

	for (int i = 1; i <= n1; i++)
	{
		result1 *= (double)((2 * i) - 1) / i;
	}

	cout << "��������� = " << result1 << endl;

	system("pause");
	return 0;
	
}