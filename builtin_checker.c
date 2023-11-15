#include "shell.h"

/**
 * checkifbuiltin - This program checks to see if a command is
 * a builtin function and if so, executes it
 * @cmd: a vector array of command line arguments
 * @b: line_buffer created in main
 *
 * Return: 1 if command is a builtin, 0 otherwise
 */

int checkifbuiltin(char **cmd, char *b)
{
	struct builtins builtins = { "env", "exit" };

	if (customstrcmp(*cmd, builtins.env) == 0)
	{
		printenv();
		return (1);
	}
	else if (customstrcmp(*cmd, builtins.exit) == 0)
	{
		exitprogram(cmd, b);
		return (1);
	}
	else
	{
		return (0);
	}
}
