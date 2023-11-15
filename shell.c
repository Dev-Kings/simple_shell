#include "shell.h"

/**
 * main - This program operates as a simple shell
 * @argc: the number of command line arguments
 * @argv: pointer to an array of command line
 * arguments
 * @envp: environment variable
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[], char *envp[])
{
	char *line_buffer = NULL, *pathcmd = NULL, *path = NULL;
	size_t buffer_size = 0;
	ssize_t chars_in_line = 0;
	char **cmd = NULL, **paths = NULL;
	(void) envp, (void) argv;

	if (argc < 1)
		return (-1);
	signal(SIGINT, handleCtrlC);
	while (1)
	{
		displayprompt();
		chars_in_line = getline(&line_buffer, &buffer_size, stdin);
		if (chars_in_line < 0)
			break;
		info.ln_count++;
		if (line_buffer[chars_in_line - 1] == '\n')
			line_buffer[chars_in_line - 1]  = '\0';
		cmd = tokenizer(line_buffer);
		if (cmd == NULL || *cmd == NULL || **cmd == '\0')
			continue;
		if (builtinorexec(cmd, line_buffer))
			continue;
		path = findpath();
		paths = tokenizer(path);
		pathcmd = findcmdpath(paths, cmd[0]);
		if (pathcmd == NULL)
			perror(argv[0]);
		else
			execute(pathcmd, cmd);
	}
	if (chars_in_line < 0 && flags.interactive)
		write(STDERR_FILENO, "\n", 1);
	free(line_buffer);
	freetokens(cmd);
	freetokens(paths);
	free(pathcmd);
	return (0);
}
