#include "pch.h"

void showTextMenu()
{
	Console::WriteLine
	(
		"1 - Fill the matrix \"C\" with random values.\n"
		"2 - Fill the one-dimensional array \"S\" with the values from the\n"
		"	row of the matrix \"C\" in which the element on the main diagonal is minimal.\n"
		"3 - Output array \"S\"\n"
		"4 - Fill the matrix \"D\" with random values.\n"
		"5 - Fill the one-dimensional array \"T\" with the values from the\n"
		"	row of the matrix \"D\" in which the element on the main diagonal is minimal.\n"
		"6 - Output array \"T\"\n"
		"0 - exit\n"
		"------------------------------------------------------------------------------------\n\n"
	);
}