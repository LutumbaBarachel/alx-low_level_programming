#include <unistd.h>

/**
 * _putchar - writes a character to standard output
 *
 * @c: the character to write
 *
 * Return: the number of bytes written, or -1 on error
 */
int _putchar(char c)
{
	return (write(STDOUT_FILENO, &c, 1));
}
