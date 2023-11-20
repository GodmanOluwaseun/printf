#include "main.h"

/**
 * print_binary - Converts ints to binary and prints.
 *
 * @num: Int to be converted.
 * Return: nothing
 */

void print_binary(uint64_t num)
{
	int j, i = 0;
	int binary[64];

	if (num == 0)
	{
	putchar('0');
	return;
	}

	while (num > 0)
	{
		binary[i++] = num % 2;
		num /= 2;
	}

	for (j = i - 1; j >= 0; j--)
	{
		putchar(binary[j] + '0');
	}
}
