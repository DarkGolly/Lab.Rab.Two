#include "pch.h"

array<int, 2>^ enterRandArr()
{
	array<int, 2>^ random_array = gcnew array<int, 2>(SIZE, SIZE);
	Random^ rnd = gcnew Random;

	for (int i = 0; i < SIZE; i++)
		for (int j = 0; j < SIZE; j++)
			random_array[i, j] = rnd->Next() / 100000 - 10000;

	Console::WriteLine("The matrix is filled successfully.");
	Console::ReadKey();
	Console::Clear();

	return random_array;
}