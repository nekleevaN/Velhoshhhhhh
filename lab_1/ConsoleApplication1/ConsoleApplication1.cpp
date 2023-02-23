#include <iostream>
#include "LogCon.h"
#include "PrintTables.h"
using namespace std;

int main()
{
	int twoVariablesCombinations[4][2] = {
		{1,1},
		{1,0},
		{0,1},
		{0,0}
	};

	int threeVariablesCombinations[8][3] = {
		{1,1,1},
		{1,1,0},
		{1,0,0},
		{0,1,0},
		{0,0,1},
		{0,1,1},
		{1,0,1},
		{0,0,0}
	};

	PrintLongTable(twoVariablesCombinations);
	PrintSortTable(threeVariablesCombinations);
}