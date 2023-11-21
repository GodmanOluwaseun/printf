#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>
#include <stdint.h>

int _printf(const char *format, ...);
void print_binary(uint64_t num);
void print_int(int num);

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
		print_int(va_arg(args, int)); \
		count++; \
		break; \
	case 'i': \
		print_int(va_arg(args, int)); \
		count++;  \
		break; \
	case 'b': \
		print_binary(va_arg(args, uint64_t)); \
		count++; \
		break; \
	default: \
		putchar('%'); \
		putchar(*format); \
		count += 2; \
		break; \
	} \
} while (0)

#endif /* MAIN_H */
