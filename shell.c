#include "main.h"

/**
 * main - initialize shell.
 *
 * Return: Always 0.
 */
int main(void)
{
	char str[200];

	while (true)
	{
		input_request();
		read_input(str, sizeof(str));
		_execute(str);
	}
	return (0);
}
