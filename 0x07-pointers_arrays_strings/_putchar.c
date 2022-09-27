#include <unistd.h>
<<<<<<< HEAD
=======

>>>>>>> dd51b7e7fc8bf062204e76902e0b804393f0daa1
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
