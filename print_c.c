#include "main.h"

/* Author: Ian-Kimeli */
/**
 * printf_char - prints a char
 * @val: arguments
 *
 * Return: 1
 */
int printf_char(va_list val)
{
	char str;

	str = va_arg(val, int);
	_putchar(str);
	return (1);
}
