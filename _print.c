#include "main.h"

/**
 * _print - writes to stdout file.
 * @str: pointet to string
 *
 * Return: Nothing.
 */
void _print(const char *str)
{
	write(STDOUT_FILENO, str, strlen(str));
}
