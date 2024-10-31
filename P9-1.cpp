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
	
	//hi
}