#include "main.h"
/**
 * _isupper - function that checks for uppercase character.
 * @x: number to be checked
 * Return: 1 for upper 0 for else
 */
int _isupper(int x)
{
	if (x >= 65 && x <= 90)
	{
		return (1);
	}
	return (0);
}
