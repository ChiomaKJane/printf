#include "main.h"
#include <stdlib.h>
/**
 * _printf - prints anything
 * @format: the format string
 *
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	int i = 0;
	int printed = 0;
	va_list args;
	va_start (args, format);

	while(format[i])
	{
		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
				case 'c':
					printed += print_char(args);
					i += 2;
					break;
					
				default:
					_putchar(format[i]);
					_putchar(format[i + 1]);
					i += 2;
					break;
			
			}
		}

	if (format[i])
	{
		_putchar(format[i]);
		printed++;
		i++;
	}
	}
	return (printed);
}
