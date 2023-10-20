#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/*FLAGS*/
#define F_MINUS  (1 << 0)
#define F_PLUS   (1 << 1)
#define F_ZERO   (1 << 2)
#define F_HASH   (1 << 3)
#define F_SPACE  (1 << 4)

int _putchar(char c);
int _printf(const char *format, ...);
int printf_char(va_list val);
int printf_string(va_list val);
int _strlen(char *str);
int _strlenc(const char *str);
int print_17(void);
int print_pointer(va_list val);
int print_int(va_list args);
int print_dec(va_list args);
int print_unsigned(va_list args);
int print_oct(va_list val);
int print_hex(va_list val);
int print_HEX(va_list val);
int print_HEX_extra(unsigned int num);
int print_exc_string(va_list val);
int print_revs(va_list val);
int get_flags(const char *format, int *i);
int get_width(const char *format, int *i, va_list list);
int print_hx(unsigned long int num);
#endif
