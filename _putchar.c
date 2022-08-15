/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 *
 * Return: On succes 1
 */
#include <unistd.h>
int _putchar(char c)
{
	return (write(1, &c, 1));
}
