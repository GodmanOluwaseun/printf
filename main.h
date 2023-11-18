#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>

int _printf(const char *format, ...);

/**
 * FORMAT_SPECIFIER - Macro to handle format specifiers through switch cases.
 */

#define FORMAT_SPECIFIER() do { \
	switch (*format) \
	{ \
	case 'c': \
		putchar(va_arg(args, int)); \
		count++; \
		break; \
	case 's': \
		str = va_arg(args, const char *); \
		while (*str) \
		{ \
			putchar(*str++); \
			count++; \
		} \
		break; \
	case '%': \
		putchar('%'); \
		count++; \
		break; \
	case 'd': \
	case 'i': \
		putchar(va_arg(args, int)); \
		count++;  \
		break; \
	default: \
		putchar('%'); \
		putchar(*format); \
		count += 2; \
		break; \
	} \
} while (0)

#endif /* MAIN_H */
