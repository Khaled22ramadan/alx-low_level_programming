#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: the string to print
 * Return: void
 */
void print_rev(char *s)
{
	int longl = 0;
	int o;

	while (*s != '\0')
	{
		longl++;
		s++;
	}
	s--;
	for (o = longl;  o > 0; o--)
	{
		_putchar(*s);
		s--;
	}
	_putchar ('\n');
}
