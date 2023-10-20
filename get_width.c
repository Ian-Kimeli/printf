#include "main.h"
#include <stdbool.h>
/**
* is_digit - checks if a character is a digit
 * @c: character to check
 * Return: true if it's a digit, false otherwise
 */
bool is_digit(char c){
	return c >= '0' && c <= '9';
}
/**
 * get_width - calculates the width for printing
 * @format: formated string in which to print the arguments
 * @i: list of arguments to be printed
 * @list: list of arguments
 * Return: width
 */
int get_width(const char *format, int *i, va_list list)
{
	int curr_i;
	int width = 0;

	for (curr_i = *i + 1; format[curr_i] != '\0'; curr_i++)
	{
		if (is_digit(format[curr_i]))
		{
			width *= 10;
			width += format[curr_i] - '0';
		}
		else if (format[curr_i] == '*')
		{
			curr_i++;
			width = va_arg(list, int);
			break;
		}
		else
			break;
	}
	*i = curr_i - 1;
	return (width);
}
