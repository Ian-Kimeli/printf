#include "main.h"
/* Author: Ian-Kimeli */

/**
 * _strlen - Return the length of the string
 * @str: string pointer
 *
 * Return: 1
 */
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
		;
	return (1);
}

/**
 * _strlenc - strlen function but applied for constant char pointer
 * @str: char pointer
 *
 * Return: 1.
 */
int _strlenc(const char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
		;
	return (1);
}
