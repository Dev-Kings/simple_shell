#include "shell.h"

/**
 * customstrstr - searches a string for a specific character
 * @str: string to examine
 * @chr: character to look for
 *
 * Return: pointer to index of first occurence, NULL if not found
 */

char *customstrstr(char *str, int chr)
{
	while (*str)
	{
		if (*str == chr)
			return (str);
		str++;
	}
	return (NULL);
}
