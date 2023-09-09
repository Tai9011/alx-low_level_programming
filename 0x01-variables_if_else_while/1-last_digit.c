#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main function
 * description: a function that prints last digit of an integer and decides whether it is less than 5, zero, or else.
 * Return - return value always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	digit = num % 10;
	if(digit > 5)
		printf("The last digit of %d is %d and is greater than 5\n",n,digit);
	else if(digit==0)
		printf("The last digit of %d is %d and is 0\n",n,digit);
	else
	printf("The last digit of %d is %d and is less than 6 and not 0\n",n,digit);	
	
	return (0);
}
