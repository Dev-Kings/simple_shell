#include "shell.h"

/**
 * findcmdpath - searches for cmd in PATH dir
 * @p: first operand
 * @cmd: second operand
 *
 * Return: pointer to dir found.
 */

char *findcmdpath(char **p, char *cmd)
{
	int i = 0;

	char *ret;

	while (p[i])
	{
		ret = pathappendcmd(p[i], cmd);
		if (access(ret, F_OK | X_OK) == 0)
		{
			return (ret);
		}
		else
			free(ret);
		i++;
	}
	return (NULL);
}
