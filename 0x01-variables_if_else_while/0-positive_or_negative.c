#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main . main function is to generate random number
 *
 * Return: Always 0 (success)
 */


int main (void)
{
int n;
printf("Enter integer number :\n");
scanf ("%d",&n);


       if (n>0)
        {
	printf("%d is positive :n \n");
	}
	else if(n<0)
	{
	printf ("%d is negative:n \n");
        }
        else if(n==0)
	{
	printf ("%d is zero:n \n");	
        }
return 0;
}
