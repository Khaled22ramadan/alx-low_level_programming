#include "main.h"
/**
 *print_last_digit - A. function that prints the last digit of a number.
 *@n: numers to checked
 *Return: value of last digit
 */
int print_last_digit(int n)
{
	int last;

	last = last % 10;
	if (n < 0)
	{
		last = last * -1;
	}
	-Putchar(last + '0');
	return (last);
}


