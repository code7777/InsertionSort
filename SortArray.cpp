// CS124Homework5.cpp : Defines the entry point for the console application.
//Author Preston Porter
//CS124 Homework 5
// Purpose insertion sort
//sorts an array from smallest to largest using the insertion sort algorithm. 


#include "stdafx.h"
#include <iostream>


using namespace std;
void swap_values(int& v1, int& v2);
void fillArray(int a[], int size, int &numStored);
void insertionSort(int a1[], int numStored);
int main()
{
	
	int arr[10] , numStored;
	fillArray(arr, 10, numStored);
	insertionSort(arr,  numStored);
	cout << "your sorted array is:\n";
		for(int i=0; i<numStored; i ++)
		{
			cout << arr[i] << " ";
			
		}
	
    return 0;
}
void swap_values(int& v1, int& v2)
{
	int temp;
		temp = v1;
	v1 = v2;
	v2 = temp;
}
void fillArray(int a[], int size, int& numStored) // user fills an array with values
{
	cout << "Enter up to "<< size <<" nonnegative whole numbers.\n";
	cout	<< "Mark the end of the list with a negative number .\n";
	int next, index = 0;
	cin >> next;
	while ((next >= 0) && (index < size))
	{
		a[index] = next;
		index++;
		cin >> next;
	}
	numStored = index;
}
void insertionSort(int a1[],  int numStored)
{
	for (int i = 0; i < numStored; i++) //starts at first value in array then increases until it reaches the last number stored in array
	{
		
		for (int j = i; j > 0; j--) //sorts the value checking each index less then current index 
		{
			if(a1[j]<a1[j-1])
			{
				swap_values(a1[j], a1[j - 1]);
			}
		}

	}
}
