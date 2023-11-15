#include "shell.h"

/**
 * findpath - This functions finds and return the PATH
 * variable for the global environment vector
 *
 * Return: PATH, if found, or NULL
 */

char *findpath(void)
{
	int i = 0;
	char **env = environ;
	char *path = NULL;

	while (*env)
	{
		if (customstrncmp(*env, "PATH=", 5) == 0)
		{
			path = *env;
			while (*path && i < 5)
			{
				path++;
				i++;
			}
			return (path);
		}
		env++;
	}
	return (NULL);
}
