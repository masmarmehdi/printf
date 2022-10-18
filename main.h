#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int (*get_flag(const char c))(va_list);
int _putchar(char c);
int _puts(char *s);
int print_char(va_list args);
int print_str(va_list args);

struct f_print
{
	char *symbol;
	int (*func)(va_list);
};

#endif
