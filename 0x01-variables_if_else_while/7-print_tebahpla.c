#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Print the alphabet in reverse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char low;

	for (low = 'z'; low >= 'a'; low--)
	putchar(low);
	putchar('\n')
	return (0);
}
