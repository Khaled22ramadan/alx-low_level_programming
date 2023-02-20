#include <stdio.h>
#include <stdlib.h>
/**
 * main - A. programe that prints the size of various type
 * Return 0 (Success)
 */

int main(void)
{

	char c;
	int  i;
	float f;
	long int l;
	long long int b;
printf("Size of a char: %lu byte(s)\n", sizeof(c));
printf("Size of an int: %lu byte(s)\n", sizeof(i));
printf("Size of a long int: %lu byte(s)\n", sizeof(l));
printf("Size of a long long int: %lu byte(s)\n", sizeof(b));
printf("Size of a float: %lu byte(s)\n", sizeof(f));

	return (0);
}
