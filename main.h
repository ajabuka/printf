#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdint.h>
#include <assert.h>
#include <stdbool.h>

/**
 * struct modifiers - struct containing flags to "turn on"
 * when a flag specifier is passed to _printf()
 * @plus: flag for the '+' character
 * @space: flag for the ' ' character
 * @hash: flag for the '#' character
 */
typedef struct modifiers
{
	bool plus;
	bool space;
	bool hash;
} mods;

/**
 * struct ch - struct ch
 * @str: pointer to string
 * @f: funtion pointer
 */
typedef struct ch
{
	char *str;
	int (*f)(va_list);
} chr_st;

int count_arg(char ch, va_list arg);
int _putchar(char c);
int _printf(const char *format, ...);
int _strlen(char *c);
int print_hexa(unsigned int num, int form);
void _puts(char *str);
char *rot13(char *s);
int use_c(va_list arg);
int use_s(va_list arg);
int use_i(va_list arg);
int use_d(va_list arg);
int use_u(va_list arg);
int use_o(va_list arg);
int use_binary(va_list arg);
int use_hex(va_list arg);
int use_HEX(va_list arg);
int use_S(va_list arg);
int use_p(va_list arg);
int print_revstr(va_list arg);
int print_rot13(va_list arg);
int handle_flags(char s, mods *f);

#endif
