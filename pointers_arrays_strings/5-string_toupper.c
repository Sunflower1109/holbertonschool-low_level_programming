#include "main.h"

/**
 * string_toupper - converts all lowercase letters of a string to uppercase
 * @str: pointer to the string
 * Return: pointer to the modified string
 */
char *string_toupper(char *str)
{
	int i = 0;
	int diff = 'a' - 'A';

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= diff;
		i++;
	}

	return (str);
}
