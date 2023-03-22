#include <stdio.h>
/**
 * main - computes and prints the sum of all multiples of 3 or 5
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int sum;

	sum = 0;

	for (i = 0; i < 10; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum = sum + i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
