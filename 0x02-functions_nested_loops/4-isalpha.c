#include "main.h"
/**
 *_isalpha - A. function that checks for alphabetic character.
 *@c: charcter to be checked
 *Return: 1 if c is a letter return 0 if else
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122 || c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
