#include "main.h"
#include <stdio.h>

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
	int i = 0;

	p = va_arg(val, void *);
	if (p == NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
			_putchar(s[i]);
		return i;
	}
	printf("0x%p", p);
	return (i);
}
