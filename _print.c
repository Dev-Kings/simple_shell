#include "main.h"

void _print(const char *str)
{
	write(STDOUT_FILENO, str, strlen(str));
}
