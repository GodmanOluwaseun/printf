#include <main.h>

/**
 * _printf - function that produces output according to a format.
 *
 * @format: String containing arguments.
 * @...: Ellipsis for unknown number of arguments.
 * Return: Number if char printed.
 */

int _printf(const char *format, ...)
{
	va_list args;

	va_start(args, format);

	int count = 0;

	while (*format)
	{
		if (*format == '%' && *format++ != '\0')
			format++;
			switch (*format)
			case 'c':
				putchar(va_arg(args, int));
				count++;
				break;
			case 's':
				const char *str = va_arg(args, const char *);

				while (*str)
				putchar(*str++);
				count++;
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

			else
			putchar(*format);
			count++;

		format++;
	}
	va_end(args);
	return (count);
}
