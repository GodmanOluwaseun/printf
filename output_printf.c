#include "main.h"

/**
 * _printf - function that produces output according to a format.
 *
 * @format: String containing arguments.
 * @...: Ellipsis for unknown number of arguments.
 * Return: Number if char printed.
 */

int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;
	const char *str;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%' && *(format + 1) != '\0')
		{
			format++;
			FORMAT_SPECIFIER();
		}

		else
		{
			putchar(*format);
			count++;
		}
		format++;
	}

	va_end(args);
	return (count);
}
