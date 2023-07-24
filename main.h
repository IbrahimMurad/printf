#include <stdarg.h>

#ifndef MAIN_H
#define MAIN_H

int _printf(const char *format, ...);

int vprint(char c, va_list args);

int str_len(char *s);

char *str_cpy(char *buf, char *s);

int _putchar(char c);

int _putstr(char *s);

char *_putnum(char *buf, int num, unsigned int base);

char *_putunsigned(char *buf, unsigned int num, unsigned int base);

char *only_printed_chars(char *s);

char *_itos(int n);

char *append_char(char *buf, char c);

char *append_str(char *buf, char *str);

char *num_printf(int n, char c);

char *unsigned_printf(unsigned int n, char c);

char *rev_str(char *s);

char *rot13(char *s);

#endif
