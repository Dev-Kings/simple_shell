#include "shell.h"

/**
 * exitprogram - frees the buffer and exits the program
 * @cmd: pointer to array of command line arguments
 * @b: line_buffer created in main
 *
 * Return: Nothing.
 */

void exitprogram(char **cmd, char *b)
{
	free(b);
	freetokens(cmd);
	exit(0);
}
