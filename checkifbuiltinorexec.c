#include "shell.h"

/**
 * builtinorexec - checks the command types to see if it
 * is a built-in or executable with a pathname
 * @cmd: array of pointers to command line arguments
 * @b: line buffer returned by getline function
 *
 * Return: 1 if the command is executed, else 0.
 */
int builtinorexec(char **cmd, char *b)
{
	if (checkifbuiltin(cmd, b))
	{
		return (1);
	}
	else if (**cmd == '/')
	{
		execute(cmd[0], cmd);
		return (1);
	}
	return (0);
}
