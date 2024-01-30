#ifndef print_function
#define printf_function

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <unistd.h>

/**
 * struct format_specifier - a format specification and function structure
 * @type: array of char
 * @func: pointer to a function
 *
 * Description: a format specification with type, and func attribute
 */
typedef struct format_specifier
{
	char *type;
	void (*func)(int *, va_list);
}  specifier;

int _printf(char *format, ...);
int _putchar(char c);
void _printchar(int *count, va_list list);
void _printstring(int *count, va_list list);
void _printnum(int *count, va_list list);
void _printerror(int *count);

#endif
