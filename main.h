#include <stdarg.h>

#ifndef MAIN_H
#define MAIN_H

int _printf(const char *format, ...);

int vprint(char c, va_list args);

int str_len(char *s);

char *str_cpy(char *buf, char *s);

int _putchar(char c);

int _putstr(char *s);

int _putnum(int num, unsigned int base);

int _putunsigned(unsigned int num, unsigned int base);

#endif
