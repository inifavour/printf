#include "main.h"

/**
 * _printf - prints formatted string
 * @format: array of char
 * Return: nothing.
 */
int _printf(char *format, ...)
{
	va_list args;
	int i, j, count = 0;
	specifier spec[] = {
		{"c", _printchar},
		{"s", _printstring},
		{"d", _printnum},
		{"i", _printnum},
	};

	i = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			j = 0;
			while (j < 4)
			{
				if (spec[j].type[0] == format[i])
				{
					spec[j].func(&count, args);
					i++;
					break;
				}
				j++;
			}
			_putchar(format[i]);
			count++, i++;
		}
		else
		{
			_putchar(format[i]);
			count++, i++;
		}
	}
	va_end(args);
	return (count);
}
