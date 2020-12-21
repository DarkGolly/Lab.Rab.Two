#include "pch.h"

array<int>^ matrixToArr(const array<int, 2>^ matrix)
{
	array<int>^ result_array = gcnew array<int>(SIZE);
	int min_index = indexOfMin(matrix);

	for (int i = 0; i < SIZE; i++)
		result_array[i] = matrix[min_index, i];

	Console::WriteLine(L"Created a one-dimensional array from"
		" elements \nof the matrix row with the minimum element on the main diagonal.");
	Console::ReadKey();
	Console::Clear();

	return result_array;
}