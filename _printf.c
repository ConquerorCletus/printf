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
	va_list arg;
	int i, count = 0, value;
	int (*f)(va_list);
	char s[2];

	if (format == NULL)
		return (-1);

	va_start(arg, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			count++;
		}
		else
		{
			s[0] = format[i + 1];
			s[1] = '\0';
			f = specifier(s);
			if (f != NULL)
			{
				value = f(arg);
				count += value;
				i++;
			}
			else
			{
				_putchar(format[i]);
				count++;
			}
		}
	}

	va_end(arg);

	return (count);
}
