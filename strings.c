#include "main.h"
/**
 *  _strcpy - copy a string src to a buffer dest
 * @src: a pointer to a string
 * @dest: buffer reciving copies of src
 * Return: @dest.
 */
char *_strcpy(char *dest, const char *src)
{
	int i, len = 0;

	while (src[len] != '\0')
		len++;

	for (i = 0; i < len; i++)
		dest[i] = src[i];

	while (dest[i])
		dest[i] = '\0';

	return (dest);
}
/**
 *  _atoi - convert a string to an integer
 * @s: a pointer to a string
 * Return: integer or 0 otherwise.
 */
int _atoi(char *s)
{
	int i = 0, signe = 0, count = 0, pow, j;
	unsigned int num = 0;
	char *c = NULL;

	while (s[i])
	{
		if (s[i] == '-')
		{
			if (signe == 1)
				signe = 0;
			else
				signe = 1;
		}
		if ((s[i] >= 48 && s[i] <= 57))
		{
			count++;
			if (c == NULL)
				c = &s[i];
		}
		if (!(s[i] >= 48 && s[i] <= 57) && count != 0)
			break;
		i++;
	}
	if (count != 0)
	{
		for (i = count; i > 0; i--)
		{
			pow = *c - 48;
			for (j = 1; j < i; j++)
				pow *= 10;
			num += pow;
			c++;
		}
		if (signe == 1)
			return (-num);
		else
			return (num);
	}
	else
		return (0);
}
/**
 * _strlen  - count the length of a string
 * @s: a pointer to a String
 * Return: length of s.
 */
int _strlen(const char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * _strcat - appends a string to another
 * @dest: String that wiil contais concatinated strings
 * @src: String that will be appended to @dest
 * Return: a pointer to conatinated String.
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = 0, j, src_len = 0;

	while (*(dest + dest_len))
	{
		dest_len++;
	}

	while (*(src + src_len))
	{
		src_len++;
	}

	for (j = 0; *(src + j); j++)
	{
		*(dest + dest_len + j) = *(src + j);
	}

	return (dest);
}
/**
 * _putchar - print a char @c
 * @c: a char to print
 * Return: 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * _strncpy - copy a string with a specified maximum length
 * @s1: the destination string
 * @s2: the source string
 * @n: the maximum number of characters to copy
 *
 * Return: a pointer to the destination string
 */
char *_strncpy(char *s1, const char *s2, int n)
{
	char *ptr = s1;

	while (n > 0 && *s2 != '\0')
	{
		*s1 = *s2;
		s1++;
		s2++;
		n--;
	}
	while (n > 0)
	{
		*s1 = '\0';
		s1++;
		n--;
	}
	return (ptr);
}
