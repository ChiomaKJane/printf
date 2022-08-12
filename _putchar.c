/**
 * _printf - prints anything
 * @format: the format string
 *
 * Return: 
 */
#include <unistd.h>
int _putchar(char c)
{
  return (write(1, &c, 1));
}
