#pragma once

using namespace System;

const int SIZE = 6;



void logic();
void menu(array<int, 2>^& C, array<int, 2>^& D, array<int>^& S, array<int>^& T);
array<int, 2>^ enterRandArr();
int selectionInputValidation();
int indexOfMin(const array<int, 2>^ arr);
array<int>^ matrixToArr(const array<int, 2>^ matrix);
void showResult(array<int>^ arr, const array<int, 2>^ matrix);

void showTextMenu();