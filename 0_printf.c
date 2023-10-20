#include "main.h"
#include <stddef.h>
#include <stdarg.h>
void print_buffer(char buffer[], int *buff_ind);


 /* Author: Ian-Kimeli*/
/**
 * _printf - Custom printf function
 * @format: format.
 * Return: printed chars.
 */
int _printf(const char *format, ...)
{
	va_list val;
	va_start(val, format);

	int length = 0;
	char *str;
	int x = 0;
	int y;

	while (format[x] != '\0')
	{
		if (format[x] == '%')
		{
			x++;
			if (format[x] == 's')
			{
				str = va_arg(val, char *);
				if (str == NULL)
				{
					str = "(null)";
				}
				y = 0;
				while (str[y] != '\0')
				{
					_putchar(str[y]);
					length++;
					y++;
				}
			}
		}
		else
		{
			_putchar(format[x]);
			length++;
		}
		x++;
	}
	va_end(val);

	return (length);
}	
