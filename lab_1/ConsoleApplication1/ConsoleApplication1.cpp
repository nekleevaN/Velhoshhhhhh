#include <iostream>
#include "LogCon.h"
using namespace std;

int main()
{
	bool a1 = 1, b1 = 1, c1 = 1;
	printf("\n| a | b | NOT (a) | AND (a,b) | OR(a,b) | IMP (a,b) | EQU (a,b) | XOR (a,b) |");
	printf("\n_____________________________________________________________________________");

	printf("\n| %d | %d |    %d    |     %d     |    %d    |     %d     |     %d     |     %d     |", (a1), (b1), NOT(a1), AND(a1, b1), OR(a1, b1), IMP(a1, b1), EQU(a1, b1), XOR(a1, b1));
	printf("\n-----------------------------------------------------------------------------");
	a1 = 1; b1 = 0;

	printf("\n| %d | %d |    %d    |     %d     |    %d    |     %d     |     %d     |     %d     |", (a1), (b1), NOT(a1), AND(a1, b1), OR(a1, b1), IMP(a1, b1), EQU(a1, b1), XOR(a1, b1));
	printf("\n-----------------------------------------------------------------------------");
	a1 = 0; b1 = 1;

	printf("\n| %d | %d |    %d    |     %d     |    %d    |     %d     |     %d     |     %d     |", (a1), (b1), NOT(a1), AND(a1, b1), OR(a1, b1), IMP(a1, b1), EQU(a1, b1), XOR(a1, b1));
	printf("\n-----------------------------------------------------------------------------");
	a1 = 0; b1 = 0;

	printf("\n| %d | %d |    %d    |     %d     |    %d    |     %d     |     %d     |     %d     |", (a1), (b1), NOT(a1), AND(a1, b1), OR(a1, b1), IMP(a1, b1), EQU(a1, b1), XOR(a1, b1));
	printf("\n-----------------------------------------------------------------------------");
	a1 = 1; b1 = 1;

	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");

	bool a, b, c;
	cout << ' ' << endl;
	a = true;
	b = true;
	c = true;
	cout << "| a | b | c | F 4 |" << endl;
	cout << "-------------------" << endl;
	cout << "| " << a << " | " << b << " | " << c << " |  " << func4(a, b, c) << "  |" << endl;
	a = true;
	b = true;
	c = false;
	cout << "| " << a << " | " << b << " | " << c << " |  " << func4(a, b, c) << "  |" << endl;
	a = true;
	b = false;
	c = false;
	cout << "| " << a << " | " << b << " | " << c << " |  " << func4(a, b, c) << "  |" << endl;
	a = false;
	b = true;
	c = false;
	cout << "| " << a << " | " << b << " | " << c << " |  " << func4(a, b, c) << "  |" << endl;
	a = false;
	b = false;
	c = true;
	cout << "| " << a << " | " << b << " | " << c << " |  " << func4(a, b, c) << "  |" << endl;
	a = false;
	b = true;
	c = true;
	cout << "| " << a << " | " << b << " | " << c << " |  " << func4(a, b, c) << "  |" << endl;
	a = true;
	b = false;
	c = true;
	cout << "| " << a << " | " << b << " | " << c << " |  " << func4(a, b, c) << "  |" << endl;
	a = false;
	b = false;
	c = false;
	cout << "| " << a << " | " << b << " | " << c << " |  " << func4(a, b, c) << "  |" << endl;
}