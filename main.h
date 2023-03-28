#ifndef _PRINTF_H_
#define _PRINTF_H_
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
#include <unistd.h>

/**
 * struct flags - struct containing flags to "turn on"
 * when a flag specifier is passed to _printf()
 * @plus: flag for the '+' character
 * @space: flag for the ' ' character
 * @hash: flag for the '#' character
 */
typedef struct flags
{
	int plus;
	int space;
	int hash;
} flags_t;

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
int print_char(va_list args);
int print_str(va_list args);
int print_percent(va_list args);
int (*specifier(char *s))(va_list);
int print_int(va_list args);
/*int print_dec(va_list args);*/
/*int print_unsigned(va_list args);*/


#endif
