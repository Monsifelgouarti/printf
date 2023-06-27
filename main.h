#ifndef MAIN_H
#define MAIN_H
/******** includes ********/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <string.h>
#include <stdarg.h>

/******** functions ********/
char *_strcpy(char *s1, const char *s2);
char *_strncpy(char *s1, const char *s2, int n);
int _strlen(const char *s);
char *my_strcat(char *destination, const char *source);
int _printf(const char *format, ...);
int get_format_sp(const char *format);
char *get_int(const char *format, int i, int arg);
char *get_str(const char *format, int i, char *arg);
char *get_esc_con_sp(const char *format, int i, char arg);
#endif
