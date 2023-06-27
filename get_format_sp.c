#include "main.h"
/**
 * get_format_sp - get location of the format specifier
 * @format: adress of fs in format string
 *
 * Return: location of the format sp in @format
 */
int get_format_sp(const char *format)
{
	char frmt_sp[] = {'c', 's', '%',
	       'd', 'i', 'b'};
	/* frmt_sp lengths */
	int lfs = sizeof(frmt_sp) / sizeof(char);
	/* temp counter variables */
	int i = 1;
	int j;

	while (format[i])
	{
		if (format[i] != ' ')
			break;
		i++;
	}
	while (format[i])
	{
		if (format[i] == ' ')
			break;
		for (j = 0; j < lfs; j++)
		{
			if (format[i] == frmt_sp[j])
				return (i);
		}
		i++;
	}
	return (-1);
}
