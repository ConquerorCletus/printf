#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * a function that checks the size of variables
 * Return: void
 */
int main(void)
{
	_printf("size of int is: %zu byte(s)\n", sizeof(int));
	_printf("size of char is: %zu byte(s)\n", sizeof(char));
	_printf("size of long int is: %zu byte(s)\n" sizeof(long int));
	_printf("size of long long int is: %zu byte(s)\n" sizeof(long long int));
}
