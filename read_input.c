#include "main.h"

/**
 * read_input - reads input from terminal.
 * @str: pointer to string.
 * @size: positive integer size.
 *
 * Return: Nothing.
 */
void read_input(char *str, size_t size)
{
	ssize_t read;

	read = getline(&str, &size, stdin);
	if (read != EOF)
	{
		if (str[read - 1] == '\n')
		{
			str[read - 1] = '\0';
		}
	}
	else
	{
		_print("\n");
		exit(EXIT_FAILURE);
	}
}
