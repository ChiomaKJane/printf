#include "main.h"
/**
 * _puts - prints a character
 * @str: arguments list
 *
 * Return: string length
 */
int _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}
/**
 * print_string - prints a string
 * @args: va_list args
 *
 * Return: string length
 */
int print_string(va_list args)
{
	return (_puts(va_arg(args, char*)));
}
