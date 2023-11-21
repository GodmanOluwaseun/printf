#include "main.h"

/**
 * print_binary - Converts ints to binary and prints.
 *
 * @num: Int to be converted.
 * Return: nothing
 */

void print_binary(uint64_t num)
{
	int j, i = 0, num_bits = 0;
	int *binary;
	uint64_t temp = num;

	while (temp > 0)
	{
		temp /= 2;
		num_bits++;
	}

	num_bits = (num_bits == 0) ? 1 : num_bits;
	binary = malloc(num_bits * sizeof(int));

	if (binary == NULL)
	{
		perror("Memory allocation failed");
		exit(EXIT_FAILURE);
	}

	if (num == 0)
	{
	putchar('0');
	return;
	}

	else
	{
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
	free(binary);
}
