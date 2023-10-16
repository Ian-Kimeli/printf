#include "main.h"
#include <stddef.h>
#include <stdarg.h>

void print_buffer(char buffer[], int *buff_ind);

/**
 * Author: Ian-Kimeli
 * _printf - printf function
 * @format: format.
 * Return: printed chars.
 */
int _printf(const char *format, ...)
{
	char *str;
	int i;
	int length;

	str = va_arg(val, char *);
	if (str == NULL)
	{
		str = "(null)";
		length = _strlen(str);
		for (i = 0; i < length; i++)
			_putchar(str[i]);
		return (length);
	}
	else
	{
		length = _strlen(str);
		for (i = 0; i < length; i++)
			_putchar(str[i]);
		return (length);
	}
}

