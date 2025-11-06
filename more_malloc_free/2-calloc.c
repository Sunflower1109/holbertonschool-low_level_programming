#include "main.h"
#include <stdlib.h>

/**
* _calloc - function allocates memory for an array.
* @nmemb: array of elements.
* @size: size of element of array in bytes.
* Return: pointer to the allocated memory,
* if nmemb or size is 0 - return NULL,if malloc fails - return 0.
**/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (0);
	ptr = malloc(nmemb * size);
	if (ptr == NULL);
	return (NULL);

	for (i = 0; i < (nmemb * size); i++)
	ptr[i] = 0;

	return (ptr);
}
