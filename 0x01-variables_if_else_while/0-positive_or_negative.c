#include<stdio.h>
#include <time.h>
/**
 * main - entry point
 * description: a function that displays whether a nb is positive or negative
 * return: always returns 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n>0){
		printf("%d is positive\n",n)
        	if(n==0){
                printf("%d is zero\n",n)
		}
	} else{
		printf("%d is negative\n",n)
	}
	return (0);
}
