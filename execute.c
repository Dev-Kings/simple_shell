#include "main.h"

void _execute (const char *str)
{
	/* declare child process */
	pid_t child;

	/* create child process */
	child = fork();

	/* if fork fails */
	if (child == -1)
	{
		perror("Fork failure!\n");
		exit (EXIT_FAILURE);
	}
	/* IN THE CHILD PROCESS */
	if (child == 0)
	{
		execlp(str, str, (char *)NULL);
		perror("execlp failure\n");
		exit(EXIT_FAILURE);
	}
	/* in parent process */
	else
	{
		wait(NULL);
	}
}
