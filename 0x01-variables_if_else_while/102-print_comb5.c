#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int k;
	int w;

	for (k = 0; k <= 99; k++)
	{
		for (w = k + 1; w <= 99; w++)
		{
			putchar(k / 10 + '0');
			putchar(k % 10 + '0');
			putchar(' ');
			putchar(w / 10 + '0');
			putchar(w % 10 + '0');

			if (!(k == 98 && w == 99))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
