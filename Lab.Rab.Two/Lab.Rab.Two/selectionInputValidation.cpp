#include "pch.h"

int selectionInputValidation()
{
	int result;
	String^ input = Console::ReadLine();

	if (int::TryParse(input, result))
	{ 
		return result;
	}
	else
	{
		Console::Write(L"Wrong input! Try again: ");
		return selectionInputValidation();
	}
}