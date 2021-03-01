#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	const int SIZE = 10;
	int arr[SIZE] = { 1,2,3,4,5,6,7,8,9,10 };
	for (int i = 1; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

