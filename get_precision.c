#include "main.h"

/**
 * get_precision - calculates the precision for printing
 * @format: formatted string in which to print the arguments
 * @i: list of arguments to be printed.
 * @list: list of arguments.
 *
 * Return: Precision.
 */
int get_precision(const char *format, int *i, va_list list)
{
	int currnt_i = *i + 1;
	int precision = -1;

	if (format[currnt_i] != '.')
		return (precision);

	precision = 0;

	for (currnt_i += 1; format[currnt_i] != '\0'; currnt_i++)
	{
		if (is_digit(format[currnt_i]))
		{
			precision *= 10;
			precision += format[curr_i] - '0';
		}
		else if (format[curr_i] == '*')
		{
			currnt_i++;
			precision = va_arg(list, int);
			break;
		}
		else
			break;
	}

	*i = currnt_i - 1;

	return (precision);
}

