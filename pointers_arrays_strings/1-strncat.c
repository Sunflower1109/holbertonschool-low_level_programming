#include "main.h"

/**
 * _strncat - concatenates at most n bytes from src to the end of dest
 * @dest: pointer to destination string
 * @src: pointer to source string
 * @n: maximum number of bytes to append from src
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}
