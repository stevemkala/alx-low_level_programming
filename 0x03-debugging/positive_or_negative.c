#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - entry point
 *
 * Return: 0
 */
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n");

	else if (i < 0)
		printf("%d is negative\n");

	else
		printf("%d is zero\n");
}
