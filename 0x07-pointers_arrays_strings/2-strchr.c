#include "main.h"

/**
 * _strchr - function that locates a character in a string
 *@s: first value -char
 *@c: second value - char
 *
 * Return: char with result
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);

		}
		else
			s++;
	}
	if (*s == c)
		return (s);
	else
		return (0);
}
