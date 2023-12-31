#include <stdarg.h>

#ifndef MAIN_H
#define MAIN_H

int _printf(const char *format, ...);

int vprint(char c, va_list args);

int str_len(char *s);

char *str_cpy(char *buf,char *s);

int _putchar(char c);

int _putstr(char *s);

char *_putnum(char *buf, int num, unsigned int base);

char *_putunsigned(char *buf, unsigned int num, unsigned int base);

char *only_printed_chars(char *buf, char *s);

char *_itos(int n);

char *append_char(char *buf, char c);

char *append_str(char *buf, char *str);

char *num_printf(char *buf, int n, char c);

char *unsigned_printf(char *buf, unsigned int n, char c);

char *rev_str(char *buf, char *s);

char *rot13(char *buf, char *s);

#endif
