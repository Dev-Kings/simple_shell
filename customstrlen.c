#include "shell.h"

/**
 * customstrlen - gets the length of a string
 * @str: string to evaluate
 *
 * Return: length of string
 */

int customstrlen(const char *str)
{
	size_t i = 0;

	while (str[i])
		i++;
	return (i);
}
