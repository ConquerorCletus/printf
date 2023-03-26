#ifndef _PRINTF_H_
#define _PRINTF_H_
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
#include <unstd.h>

/**
 * struct specifiers - a structure for specifier
 * @s: specifier string
 * @f: function that prints
 */

typedef struct specifiers
{
	char *s;
	int (*f)(va_list);
} f_specifier;


int _printf(const char *format, ...);
int _putchar(char);
int (*specifier(const char *format))(va_list);

#endif
