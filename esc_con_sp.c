#include "main.h"
/**
 * get_esc_con_sp - escape conversion specifier for @arg
 * @format: format string of s conversion specifier
 * @i: location of @arg in @format
 * @arg: fs to be escaped
 *
 * Return: value of @arg as a string
 */
char *get_esc_con_sp(const char *format, int i, char arg)
{
	char *p = malloc(sizeof(arg) + 1);

	(void) format;
	(void) i;
	if (p == NULL)
	{
		return (NULL);
	}
	_strncpy(p, &arg, 1);
	_strncpy(p + 1, "\0", 1);
	return (p);
}
