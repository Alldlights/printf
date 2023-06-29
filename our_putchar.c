#include <unistd.h>

/**
 * our_putchar - fuction that print a single alphabet
 * @a: parameter type
 * Return: integer
 */
int our_putchar(char a)
{
	int i;

	i = write(1, &a, 1);
	return (i);
}
