#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints all possible combinations
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int p, q;

	for (p = '0'; p <= '99'; p++)
	{

	for (q = p + 1; q <= '99')
	{
	putchar((p / 10) + '0');
	putchar((p % 10) + '0');
	putchar(' ');
	putchar((q / 10) + '0');
	putchar((q % 10) + '0';)
	if (p == 98 && p == 99)
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	putchar(' ');
	return (0);
}
