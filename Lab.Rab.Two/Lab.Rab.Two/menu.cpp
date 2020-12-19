#include "pch.h"

void menu(array<int, 2>^& C, array<int, 2>^& D, array<int>^& S, array<int>^& T)
{
	bool isC = false, isD = false, isS = false, isT = false;
	while (true)
	{
		showTextMenu();
		switch (selectionInputValidation())
		{
		case 0:
			return;
		case 1:
			C = enterRandArr();
			isC = true;
			break;
		case 2:
			if (isC == true)
			{
				S = matrixToArr(C);
				isS = true;
			}
			else
			{
				Console::WriteLine(L"There is no data to work with. Fill in the matrix.");
				Console::ReadKey();
				Console::Clear();
			}
			break;
		case 3:
			if (isS == true)
			{
				showResult(S, C);
			}
			else
			{
				Console::WriteLine(L"Before performing step 3, you must complete step 2.");
				Console::ReadKey();
				Console::Clear();
			}
			break;
		case 4:
			D = enterRandArr();
			isD = true;
			break;
		case 5:
			if (isD == true)
			{
				T = matrixToArr(D);
				isT = true;
			}
			else
			{
				Console::WriteLine(L"There is no data to work with. Fill in the matrix.");
				Console::ReadKey();
				Console::Clear();
			}
			break;
		case 6:
			if (isT == true)
			{
				showResult(T, D);
			}
			else
			{
				Console::WriteLine(L"Before performing step 6, you must complete step 5.");
				Console::ReadKey();
				Console::Clear();
			}
			break;
		default:
			break;
		}
	}
	
}