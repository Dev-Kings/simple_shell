#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>

void input_request(void);      /* request command input*/
void _print(const char *str);  /* print output */
void _execute(const char *str); /* execute function */
void read_input(char *str, size_t size);

#endif /* Main_H */
