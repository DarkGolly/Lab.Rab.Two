#include "pch.h"

int indexOfMin(const array<int, 2>^ arr)
{
	int minIndex = 0;

	for (int i = 1; i < SIZE; i++)
		if (arr[i, i] < arr[minIndex, minIndex])
			minIndex = i;

	return minIndex;
}