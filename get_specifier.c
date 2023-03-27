#include "main.h"
/**
 * specifier - a function that checks format specifier.
 * @format: The specifier parameter
 * Return: pointer fo function, if specifier is valid
 * NULL, if specifier not valid
 * Date: 26-03-2023
 */
int (*specifier(char *format))(va_list)
{
	int i;

	f_specifier spec[] = {
		{"c", print_char},
		{"s", print_str},
		{"d", print_int},
		{"i", print_int},
		{"%", print_percent},
		{NULL, NULL},
	};

	for (i = 0; spec[i].s != NULL; i++)
	{
		if (*spec[i].s == *format)
			return (spec[i].f);
	}
	return (NULL);
}

