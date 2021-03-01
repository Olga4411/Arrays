#include<iostream>
using namespace std;
#define tab "\t"

void main()
{
	setlocale(LC_ALL, "Russian");
	const int SIZE = 10;
	int arr[SIZE] = { 1,2,3,4,5,6,7,8,9,10 };
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
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