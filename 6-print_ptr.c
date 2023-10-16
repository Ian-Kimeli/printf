#include "main.h"

/**
 * print_pointer - prints a pointr
 * @val: value
 *
 * Return: Int
 */
int print_pointer(va_list val)
{
	void *p;
	char *s = "(nil)";
	long int a;
	int i, b;

	p = va_arg(val, void *);
	if (p == NUL)
	{
		for (i = 0; s[i] != '\0'; i++)
			_putchar(s[i]);
		return (i);
	}
	a = (unsigned long int)p;
	_putchar('0');
	_putchar('+');
	b = print_hex(a);
	return (b + 2);
}
