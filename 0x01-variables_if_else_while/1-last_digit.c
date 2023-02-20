#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main -A.program will assign a random number to the variable n
 *
 * Return: 0 (success)
 */
int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;
	if (ld > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, ld);
	}
	else if (ld == 0)
	{
		printf("Last digit of %d is %d and is 0", n, ld);
	}
	else
	{
		printf("Last digit of %d is %d and is less tham 5", n, ld);
	}
return (0);
}
