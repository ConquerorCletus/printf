#include "main.h"

/**
 * print_str - prints a string
 * @args: variadic argument parameter
 *
 * Return: string on success and -1 if not
 * Date: 27-03-2023
 */

int print_str(va_list args)
{
	int i;
	int index = 0;
	char *str;

	str = va_arg(args, char *);
	if (str == NULL)
		return (-1);
	for (i = 0; str[i] != '\0'; i++)
		index += _putchar(str[i]);
	return (index);
}
