#include "shell.h"

/**
 * displayprompt - prints the prompt if shell is in interactive mode
 *
 * Return: Nothing.
 */

void displayprompt(void)
{
	if ((isatty(STDIN_FILENO) == 1) && (isatty(STDOUT_FILENO) == 1))
		flags.interactive = 1;
	if (flags.interactive)
		write(STDERR_FILENO, "$ ", 2);
}
