#include "main.h"
/**
 * _isupper - detects uppercase
 *
 *
 */
int _isupper(int c)
{
	int c = 'A';
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
