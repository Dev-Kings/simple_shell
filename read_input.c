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
	if (fgets(str, size, stdin) == NULL)
	{
		if (feof(stdin))
		{
			_print("\n");
			exit(EXIT_SUCCESS);
		}
		else
		{
			_print("input reading error!\n");
			exit(EXIT_FAILURE);
		}
	}
	str[strcspn(str, "\n")] = '\0'; /*remove new line */
}
