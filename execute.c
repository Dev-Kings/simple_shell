#include "main.h"

/**
 * _execute - executes function.
 * @str: pointer to const string
 * @filename: initial executable filename
 *
 * Return: Nothing.
 */
void _execute(const char *str, char *filename)
{
	pid_t child;
	char *args[2];

	child = fork();

	/* if fork fails */
	if (child == -1)
	{
		perror("Fork failure!\n");
		exit(EXIT_FAILURE);
	}
	/* IN THE CHILD PROCESS */
	if (child == 0)
	{
		args[0] = (char *)str;
		args[1] = NULL;
		if (execve(args[0], args, NULL) == -1)
		{
			perror(filename);
			exit(EXIT_FAILURE);
		}
	}
	/* in parent process */
	else
	{
		wait(NULL);
	}
}
