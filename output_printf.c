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

	if (format == NULL)
	return (-1);

	va_start(args, format);

	while (*format)
	{
		if (*format == '%' && *(format + 1) != '\0')
		{
			format++;
			switch (*format)
			{
			case 'c':
				putchar(va_arg(args, int));
				count++;
				break;
			case 's':
				str = va_arg(args, const char *);

				while (*str)
				{
				putchar(*str++);
				count++;
				}
				break;
			case '%':
				putchar('%');
				count++;
				break;
			default:
				putchar('%');
				putchar(*format);
				count += 2;
				break;
			}
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
