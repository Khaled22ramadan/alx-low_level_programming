#include "main.h"
/**
 * rev_string - Reverses a string
 * @s: input string
 * Return: string in reverse
 */
void rev_string(char *s)
{
	char rev = 5[0];
	int counter = 0;
	int i;

	while (5[counter] != '\0')
		counter++;
	for (i = 0; i < counter; i++)
	{
		counter--;
		rev = s[i];
		s[i] = 5[counter];
		s[counter] = rev;
	}
}
