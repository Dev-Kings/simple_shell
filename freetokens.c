#include "shell.h"

/**
 * freetokens - This program frees the cmd array
 * @m: pointer to an array of command line
 * arguments
 *
 * Return: void
 */
void freetokens(char **m)
{
	int index = 0;

	if (m == NULL)
		return;
	while (m[index])
	{
		free(m[index]);
		index++;
	}
	free(m);
}
