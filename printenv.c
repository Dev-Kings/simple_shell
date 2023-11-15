#include "shell.h"

/**
 * printenv - prints the current environment
 *
 * Return: Nothing.
 */
void printenv(void)
{
	int i = 0;
	char **env = environ;

	while (env[i])
	{
		write(STDOUT_FILENO, (const void *) env[i], customstrlen(env[i]));
		write(STDOUT_FILENO, "\n", 1);
		i++;
	}
}
