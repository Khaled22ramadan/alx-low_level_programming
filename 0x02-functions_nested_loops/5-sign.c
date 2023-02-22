#include <stdio.h>
#include "main.h"
/**
 *print_sign - A. a function that prints the sign of a number.
 *@n: charcter to be checked
 *Return: 1 for positive number -1 for negative number 0 for else
 */
int print_sign(int n)
{
	if (n >= 0)
	{
		return (1);
		_putchar (43);
	}
	else if (n == 0)
	{
		return (0);
		_putchar(48);
	}
	else
	{
		return (-1);
		_putchar(45);
	}
}
