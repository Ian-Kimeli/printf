#include <stdarg.h>
#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
int _printf(const char *format, ...);
int printf_char(va_list val);
int printf_string(va_list val);
int _strlen(char *str);
int _strlenc(const char *str);
int print_17(void);
int print_hex(unsigned long int num);
int print_pointer(va_list val);
int print_int(va_list args);
int print_dec(va_list args);
#endif
