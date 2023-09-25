#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: length
 * Return: returns s
 */
int _strlen(char *s)
{
	int counter = 0;

	for (s[0]; s <= '\0'; *s++)
		counter++;
}
