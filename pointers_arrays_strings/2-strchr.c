#include "main.h"

/**
 * _strchr - function that locates a character in a string.
 * @s: tring to search in
 * @c: character in the string s to search for
 * Return: a pointer to the first occurrence of the character c in s
 * or NULL if the character c is not found.
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	if (c  == '\0')
		return (&s[i]);
	return (0);
}
