#include<iostream>
using namespace std;
#define tab "\t"

void main()
{
	setlocale(LC_ALL, "Russian");
	const int n = 10;
	int arr[n] = { 1,2,3,4,5,6,7,8,9,10 };
	// ����� �� ����� �������
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
	int number_of_shifts;// ���������� �������
	cout << "�� ������� ��������� �������� ������:"; cin >> number_of_shifts;
	for (int i = 0; i < number_of_shifts; i++)
		// ����� �������
	{
		int buffer = arr[0];// ������� ������� ��������� � ������, �����-��������� ��������� ��� ����
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
	// ����� ���������� ������� �� �����
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

// ����� ���������� ������� �� �����
	/*for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	for (int i = 1; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	for (int i = 0; i <1; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	for (int i = 2; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	for (int i =0 ; i < 2; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	for (int i = 3; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	for (int i=0; i<3; i++)
	{ 
		cout << arr[i] << "\t";
	}*/

}