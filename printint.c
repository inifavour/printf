#include "main.h"
/**
 * _printnum - prints an integer.
 * @count: pointer to an integer.
 * @list: the variadic arg list.
 * Return: void.
 */
void _printnum(int *count, va_list list)
{
	int n, place = 10, remainder, num, excess = 0;

	n = va_arg(list, int);
	if (n < 0)
	{
		_putchar('-'), (*count)++;
		if (n == INT_MIN)
			num = INT_MAX, excess++;
		else
			num = n * -1;
	}
	else
	{
		num = n;
	}
	if (num == 0 || num < 10)
	{
		_putchar((num % 10) + '0'), (*count)++;
	}
	else
	{
		while (num)
		{
			if (num / place < 10)
			{
				remainder = num;
				break;
			}
			place = place * 10;
		}
		while (place != 1)
		{
			_putchar((remainder / place) + '0'), (*count)++;
			remainder = remainder % place;
			place = place / 10;
		}
		_putchar(((remainder % 10) + excess) + '0'), (*count)++;
	}
}
