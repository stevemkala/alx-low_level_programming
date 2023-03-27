#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: character that checks the length of the string
 * Return: Always 0(Success)
 */
int _strlen(char *s)
{
	int a = 0; /* Starts the count  from 0 */

	for (; *s++;)
		a++;

	return (a);
}
