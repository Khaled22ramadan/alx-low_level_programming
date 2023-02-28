#include <stdio.h>
/**
 * swap_int - swaps the values of two integer
 * @a: the first integer two swap
 * @b: the second integer to swap
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
