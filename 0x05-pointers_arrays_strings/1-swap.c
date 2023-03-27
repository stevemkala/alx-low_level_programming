#include "main.h"
/**
 * swap_int - swaps 2 integers
 * @a: 1st integer
 * @b: 2nd integer
 * Return: Always 0 (Success)
 */
void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
