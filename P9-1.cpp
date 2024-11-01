/*
* File: P9-1.cpp
* Author : Braylon Rieman
* Date : 10 / 31 / 2024
*
* Description : Lab 9 Arrays and Functions
*
*/

#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	//seeds random
	srand(time(0));

	//variables
	const int arraySize = 10;
	int array[arraySize];

	//fills the array
	for (int i = 0; i < arraySize; i++)
		array[i] = rand() % 9000 + 1000;

	//displays array in order of appearance
	cout << "The random integers: ";
	for (int i = 0; i < arraySize; i++)
		cout << array[i] << " ";

	//displays even indices
	cout << "\nEven indices: ";
	for (int i = 0; i < arraySize; i++)
	{
		if (i % 2 == 0)
			cout << array[i] << " ";
	}

	//displays even values
	cout << "\nEven values: ";
	for (int i = 0; i < arraySize; i++)
	{
		if (array[i] % 2 == 0)
			cout << array[i] << " ";
	}

	//displays reverse order
	cout << "\nReversed Order: ";
	for (int i = arraySize - 1; i >= 0; i--)
	{
		cout << array[i] << " ";
	}

	//displays first and last number
	cout << "\nFirst and last: " << array[0] << " " << array[arraySize - 1];
}