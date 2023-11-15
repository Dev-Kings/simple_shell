#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>

extern char **environ;

void input_request(void);      /* request command input*/
void _print(const char *str);  /* print output */
void _execute(const char *str, char *filename); /* execute function */
void read_input(char *str, size_t size);
char **make_array(char *str, char *delim);
size_t token(char *str, char *delim);
char *get_path(char **envp);

#endif /* Main_H */
