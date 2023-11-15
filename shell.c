#include "main.h"

/**
 * main - initialize shell.
 * @argc: argument count
 * @argv: arguments
 *
 * Return: Always 0.
 */
int main(int argc __attribute__((unused)), char **argv)
{
	char str[256];

	while (true)
	{
		input_request();
		read_input(str, sizeof(str));
		_execute(str, argv[0]);
	}
	return (0);
}
