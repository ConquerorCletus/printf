#include "main.h"

/**
 * print_unsigned - prints an unsigned integer from variadic parameters to base 10
 * @args: variadic parameter
 *
 * Return: number of characters printed on Success
 */
int print_unsigned(va_list args)
{
        unsigned int i = 0;
        unsigned int count = 0;
        unsigned int number;
        unsigned int print_arr[10];

        number = va_arg(args, unsigned int);
        while (number != 0)
        {
                print_arr[i] = (number % 10);
                number = number / 10;
                if (number == 0)
                        break;
                i++;
        }
        for (i = 0; i <= 9; i++)
        {
                _putchar('0' + print_arr[i]);
                count++;
        }
        return (count);
}

