#include <stdio.h>
#include <stdlib.h>
/**
 * main - A. program that prints the size of various types on the computer
 * Return 0 (Success)
 */

int main(void)
{

	char c;
	int  i;
	float f;
	long int l;
	long long int b;
printf("size of a char: %lu byte(s)\n", sizeof(c));
printf("size of an int: %lu byte(S)\n", sizeof(i));
printf("sizr of a long int: %lu byte(s)\n", sizeof(l));
printf("size of a long long int: %lu byte(s)\n", sizeof(b));
printf("size of a float: %lu byte(S)", sizeof(f));

return (0);
}
