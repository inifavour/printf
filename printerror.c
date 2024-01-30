#include "main.h"

/**
 * _printerror - prints '(null)' to the stdout
 * @count: pointer to an int
 * Return: nothing
 */
void _printerror(int *count)
{
	char *s = "(null)";
	int len = 6, counter = 0;

	while (counter < len)
	{
		_putchar(s[counter]);
		(*count)++;
		counter++;
	}
}
