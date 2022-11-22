#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
#include <stdio.h>

typedef struct cases_all
{
  char *print_cases;
  int (*cases_print) (va_list, char *buff, int len);
} cases;

int _putchar (char c);
int _printf (char *format, ...);
int (*get_print_cases (char *arg)) (va_list, char *, int);
int print_c (va_list ap, char *buff, int len);
int replace (char *buffer, char *s, int print_len);
int print_s (va_list ap, char *buff, int len);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);

#endif
