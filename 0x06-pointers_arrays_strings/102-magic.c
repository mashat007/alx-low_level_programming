#include <stdio.h>

/**
<<<<<<< HEAD
 * main - checks the code
 *
 * Return: always 0
=======
 * main - check code
 *
 * Return: Always 0
>>>>>>> dd51b7e7fc8bf062204e76902e0b804393f0daa1
 */
int main(void)
{
	int n;

	int a[5];

	int *p;

	a[2] = 1024;
	p = &n;
<<<<<<< HEAD

	*(p + 5) = 98;
	/* ...so that this prints 98\n */
	printf("a[2] = %d\n", a[2]);
	return (0);
}

=======
	*(p + 5) = 98;
	printf("a[2] = %d\n", a[2]);
	return (0);
}
>>>>>>> dd51b7e7fc8bf062204e76902e0b804393f0daa1
