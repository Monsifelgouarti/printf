#include "main.h"
/**
 * _printf - write output to stdout, the standard output stream
 * @format: is a character string
 * @...: conversion specifier value to print
 * Return: returns number of characters printed and -1 if there is an error.
 */
int _printf(const char *format, ...)
{
	va_list arg;
	int cntr = 0, i = 0;
	char *fs;

	if (!format)
		return (-1);
		va_start(arg, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			int j;

			j = get_format_sp(&format[i]);
			if (j  < 0)
			{
				return (cntr);
			}
			if (format[i + j] == 'c' || format[i + j] == 'd'
				|| format[i + j] == 'i' || format[i + j] == 'b')
				fs = get_int(&format[i], j, va_arg(arg, int));
			else if (format[i + j] == 's')
				fs = get_str(&format[i], j, va_arg(arg, char *));
			else if (format[i + j] == '%')
				fs = get_esc_con_sp(&format[i], j, format[i + j]);
			if (fs == NULL)
				return (cntr);
			write(1, fs, _strlen(fs));
			i += j;
			cntr += _strlen(fs);
			free(fs);
		}
		else
		{
			write(1, &format[i], 1);
			cntr++;
		}
		i++;
	}
	return (cntr);
}
