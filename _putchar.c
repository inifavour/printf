#include "main.h"

/**
 * _putchar - writes char to the stdout
 * @c: char to be printed
 *
 * Return: on success 1
 * on error,-1 is returned, and erno is set appropriately.
 */

int_putchar(char c)
{
	return (write(1, &c, 1));
}
