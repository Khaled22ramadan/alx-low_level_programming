#include "main.h"
/**
 * _isdigit - function that checks for a digit (0 through 9).
 * @x: the number to be checked
 * Return: 1 for charchter that will be digit  or 0 for else
 */
int _isdigit(int x)
{
	if (x >= 48 && x <= 57)
	{
		return (1);
	}
	return (0);
}
