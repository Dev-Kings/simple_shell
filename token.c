#include "main.h"

/**
 * token - tokenizes string from stdin.
 * @str: pointer to string from stdin.
 * @delim: pointer to string delimiter.
 *
 * Return: Number of words in string.
 */
size_t token(char *str, char *delim)
{
	size_t n = 0;

	if (strtok(str, delim) != NULL)
		++n;
	while (strtok(NULL, delim) != NULL)
	{
		++n;
	}
	return (n);
}
