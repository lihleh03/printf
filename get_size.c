#include "main.h"

/**
 * get_size - calculates the size of the cast on he argument.
 * @form: the formtted string prints the argument.
 * @i: list all the arguments printed.
 * 
 * Return: Presition (Success)
 */
int get_size(const char *format, int *i)
{
	current_i = *i + 1;
	int size = 0;

	if (form([current_i]) == 'l')
			size = s_LONG;
	else if (form([current_i]) == 'h')
			size = s_SHORT;
	if (size == 0)
		*i = current_i - 1;
	else 
		*i = current_i;

	return (size);
}
