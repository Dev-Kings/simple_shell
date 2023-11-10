#include "main.h"

int main (void)
{
	char str[200];

	while (true)
	{
		input_request();
		read_input(str, sizeof(str));
		_execute(str);
	}
	return 0;
}
