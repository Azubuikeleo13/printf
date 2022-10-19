#include <unistd.h>

/**
 * _putchar - Function to write to standard output
 *
 * @c: Character to write to standard output
 *
 * Return: 1 on success
 * or -1 on error, and errno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, @c, 1));
}
