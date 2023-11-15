#include "shell.h"

/**
 * handleCtrlC - This program allows ctrl+C to be
 * printed by the shell
 * @n: signum
 *
 * Return: void
 */
void handleCtrlC(int n __attribute__((unused)))
{
	write(STDERR_FILENO, "\n", 1);
	write(STDERR_FILENO, "$ ", 2);
}
