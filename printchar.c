#include "main.h"

/**
 * _printchar - prints a char to the stdout
 * @count: pointer to an int
 * @list: variadic arg list
 * Return: nothing
 */
void _printchar(int *count, va_list list)
{
	_putchar(va_arg(list, int);
			(*count)++;
}
/**
 * _printstring - prints array of char to the stdout
 * @count: pointer to an int
 * @list: variadic arg list
 * Return: nothing
 */

void _printstring(int *count, va_list list)
{
char *s;
int len = 0, counter = 0;
s = va_arg(list, char *);
if (!s)
{
_printerror(count);
return;
}
while (s[len])
	len++;
while (counter < len)
{
	_putchar(s[counter]);
	(*count)++;
	counter++;
}
}
