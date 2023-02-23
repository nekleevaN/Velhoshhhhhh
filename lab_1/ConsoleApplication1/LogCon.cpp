#include "LogCon.h"

bool NOT(bool a1)
{
	if (a1 == true)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

bool AND(bool a1, bool b1)
{
	if (a1 == true && b1 == true)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
bool OR(bool a1, bool b1)
{
	if (a1 == true || b1 == true)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
bool EQU(bool a1, bool b1)
{
	if ((a1 == true and b1 == true) || (a1 == false and b1 == false))
		return 1;
	else
	{
		return 0;
	}
}
bool IMP(bool a1, bool b1)
{
	if ((a1 == true && b1 == true) || (a1 == false && b1 == false))
	{
		return 1;
	}
	else if (b1 == true)
	{
		return 1;

	}
	else
	{
		return 0;
	}
}
bool XOR(bool a1, bool b1)
{
	if ((a1 == false && b1 == false) || (a1 == true && b1 == true))
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
bool func4(bool a1, bool b1, bool c1)
{
	return XOR(AND(a1, (OR(a1, NOT(b1)))), (AND(c1, b1)));
}