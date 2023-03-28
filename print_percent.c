#include "main.h"

/**
 * print_percent - prints character % to stdout
 * @args: variadic argument parameter
 *
 * Return: number of characters printed
 */

int print_percent(va_list args)
	{
	(void)args;
	return (_putchar('%'));
}
