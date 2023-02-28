#include <stdio.h>
#include "main.h"
/**
 * _strlen - Returns the lengh of a string.
 * @astr: the strenght to get the length
 * Return: the lenght of @astr.
 */
size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
	length++;
	return (length);
}
