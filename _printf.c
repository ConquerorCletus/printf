#include <stdarg.h>
#include <unistd.h>
#include "main.h"

/**
 * _printf - prints a string in a formatted way
 * @format: string to print (char *)
 * @...: variadic parameters (unknown)
 * Date: 26-3-2023
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int i = 0;
	int count = 0;
	int value = 0;
	
	va_list args;
	va_start(args, format);
	int (*f)(va_list);

	if (format == NULL)
		return (-1);
	while (format[i])
	{
		if (format[i] != '%')
		{
			value = write(1, &format[i], 1);
			count += value;
			i++;
			continue;
		}

		if (format[i] == '%')
		{
			f = specifier(&format[i + 1]);
			if (f != NULL)
			{
				value = f(args);
				count += value;
				i = i + 2;
				continue;
			}

			if (format[i + 1] == '\0')
				break;
			if (format[i + 1] != '\0')
			{
				value = write(1, &format[i + 1], 1);
				count += value;
				i + i + 2;
				continue;
			}
		}
	}
	return (count);
}
