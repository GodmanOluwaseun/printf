#include "main.h"
#include <math.h>

/**
 * print_int - Function that prints an int.
 *
 * @num: int to print.
 * return: (0)
 */

void print_int(int num)
{
	int i = 0;
	char digits[20];

	if (num < 0)
	{
		putchar('-');
		num = -num;
	}

	if (num == 0)
	{
		putchar('0');
		return;
	}

	while (num > 0)
	{
		digits[i++] = (num % 10) + '0';
		num /=  10;
	}

	while (--i >= 0)
	{
		putchar(digits[i]);
	}
}
