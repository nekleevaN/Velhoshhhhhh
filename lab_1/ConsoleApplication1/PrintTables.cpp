#include "PrintTables.h"
#include <stdio.h>
#include "LogCon.h"

void PrintLongTable(int combinations[4][2]) 
{
	printHeader(false);
	printHorisontalLine(false);

	for (int i = 0; i<4; i++)
	{
		PrintLongTableLine(combinations[i][0], combinations[i][1]);
	}
	PrintSpace();
}

void PrintSortTable(int combinations[8][3])
{
	printHeader(true);
	printHorisontalLine(true);

	for (int i = 0; i < 8; i++)
	{
		PrintShortTableLine(combinations[i][0], combinations[i][1], combinations[i][2]);
	}
	PrintSpace();
}

void printHeader(bool isShort)
{
	if (!isShort)
	{
		printf("\n| a | b | NOT (a) | AND (a,b) | OR(a,b) | IMP (a,b) | EQU (a,b) | XOR (a,b) |");
	}
	else
	{
		printf("\n| a | b | c | F 4 |");
	}
}

void printHorisontalLine(bool isShort)
{
	if (!isShort)
	{
		printf("\n_____________________________________________________________________________");
	}
	else
	{
		printf("\n-------------------");
	}
	
}

void PrintLongTableLine(int first, int second)
{
	printf("\n| %d | %d |    %d    |     %d     |    %d    |     %d     |     %d     |     %d     |", (first), (second), NOT(first), AND(first, second), OR(first, second), IMP(first, second), EQU(first, second), XOR(first, second));
	printHorisontalLine(false);
}

void PrintShortTableLine(int first, int second, bool third)
{
	printf("\n| %d | %d | %d |  %d  |", (first), (second), (third), func4(first, second, third));
}

void PrintSpace() {
	printf("\n\n\n");
}
