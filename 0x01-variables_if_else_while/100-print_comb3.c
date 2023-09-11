#include<stdio.h>
/**
 *
 *
 *
 */
int main(void)
{
	int s = 0;
	int r = 1;
	
	while ( s <= 9 && r <= 9)
	{
		if (s < r)
		{
		putchar(s + 48);
		putchar(r + 48);
		putchar(44);
		putchar(32);
		}
		s++;
		r++;
	}
	putchar('\n');
	return (0);
}
