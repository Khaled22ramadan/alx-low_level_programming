#include "main.h"
/**
 *  print_most_numbers - A. function  print the number since 0 up to 9
 *  Description: prints the numbers cxcluding 2 and 4
 *  Return: the  numbers 0 t0 9
 */
void print_most_numbers(void)
{
	int x = 0;

	for (; x <= 9; x++)
	{
		if (x == 2 || x == 4)
		{
			continue;
		}
		else
		{
			_putchar(x + '0');
		}
	}
}
