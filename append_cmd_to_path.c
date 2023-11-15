#include "shell.h"

/**
 * pathappendcmd - concat path with cmd token
 * @path: path string to append to
 * @cmd: command to append
 *
 * Return: pointer to appended path
 */

char *pathappendcmd(char *path, char *cmd)
{
	char *stream;
	size_t a = 0, b = 0;

	if (cmd == 0)
		cmd = "";
	if (path == 0)
		path = "";
	stream = malloc(sizeof(char) * customstrlen(path) + customstrlen(cmd) + 2);
	if (stream == NULL)
		return (NULL);
	while (path[a])
	{
		stream[a] = path[a];
		a++;
	}
	if (path[a - 1] != '/')
	{
		stream[a] = '/';
		a++;
	}
	while (cmd[b])
	{
		stream[a + b] = cmd[b];
		b++;
	}
	stream[a + b] = '\0';

	return (stream);
}
