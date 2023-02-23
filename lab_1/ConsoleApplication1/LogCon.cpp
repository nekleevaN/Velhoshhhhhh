#include "LogCon.h"

bool NOT(bool a1)
{
	return a1 == true ? false : true;
}

bool AND(bool a1, bool b1)
{
	return a1 == true && b1 == true;
}

bool OR(bool a1, bool b1)
{
	return a1 == true || b1 == true;
}

bool EQU(bool a1, bool b1)
{
	return (a1 == true and b1 == true)
		|| (a1 == false and b1 == false);
}

bool IMP(bool a1, bool b1)
{
	return b1 == true
		|| (a1 == false && b1 == false);
}

bool XOR(bool a1, bool b1)
{
	return (a1 == false && b1 == false)
		|| (a1 == true && b1 == true);
}

bool func4(bool a1, bool b1, bool c1)
{
	return XOR(AND(a1, (OR(a1, NOT(b1)))), (AND(c1, b1)));
}