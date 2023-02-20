#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main -A. program will assign a random number to the variable n
 * Return: 0 (Success )
 */

int main(void)
{
int n;
srand(time(NULL));
n = rand() % RAND_MAX;
printf("The number, %d, ", n);
if (n > 0)
{
printf("is positive\n");
}
else if (n == 0)
{
printf("is zero\n");
}
else
{
printf("is negative\n");
}
return (0);
}
