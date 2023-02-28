#include "main.h"
/**
 * _atoi - convert a string to an integer
 * @s: the pointer to convert
 * Return: A integer
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}
