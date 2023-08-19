#include "main.h"

/**
 * get_size - calculates the size of the cast on he argument.
 * @format: the formatted string prints the argument.
 * @i: list all the arguments printed.
 *
 * Return: Presition (Success)
 */
int get_size(const char *format, int *i)
{
	int currnt_i = *i + 1;
	int size = 0;

	if (format[currnt_i] == 'l')
		size = S_LONG;
	else if (format[currnt_i] == 'h')
		size = S_SHORT;
	if (size == 0)
		*i = currnt_i - 1;
	else
		*i = currnt_i;

	return (size);
}
