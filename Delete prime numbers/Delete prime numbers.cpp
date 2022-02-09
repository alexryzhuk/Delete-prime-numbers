// Delete prime numbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <ctime>
using namespace std;

void inputArr(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 20;
	}
}
void printArr(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
}
void deleteSimpleNumbers(int* A, int m, int*& B, int &n)
{
	int ii = 0;
	for (int i = 0; i < m; i++)
	{
		int a = A[i];
		for (int j = 2; j <=a; j++)
		{
			if (j!=a && a%j==0)
			{
				B[ii] = a;
				ii++;
				break;
			}			
		}
	}	
	n = ii;
}

int main()
{
	srand(time(NULL));
	int m = 1;
	cout << "Enter m" << endl;
	cin >> m;		
	int n=m;
	int* A = new int[m];
	int* B = new int[n];
	
	inputArr(A, m);
	printArr(A, m);
	cout << endl;	
	deleteSimpleNumbers(A, m, B, n);	
	cout << endl;
	printArr(B, n);

	delete[]A;
	delete[]B;	
}
