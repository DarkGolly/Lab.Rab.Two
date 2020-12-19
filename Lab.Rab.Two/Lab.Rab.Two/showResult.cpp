#include "pch.h"

void showResult(array<int>^ arr, const array<int, 2>^ matrix)
{
	Console::Clear();
	Console::WriteLine("Before:");
	Console::WriteLine(L"________________________________________________");
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 6; j++)
			Console::Write(L"{0,6}", matrix[i, j]);
		Console::WriteLine();
	}
	Console::WriteLine(L"________________________________________________");

	Console::WriteLine("After:");
	Console::WriteLine(L"________________________________________________");
	for (int i = 0; i < SIZE; i++)
		Console::Write(L"{0,7}", arr[i]);
	Console::WriteLine(L"\n________________________________________________");

	Console::ReadKey();
	Console::Clear();
}