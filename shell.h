#ifndef SHELL_H
#define SHELL_H

/*libraries*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/stat.h>
#include <errno.h>
#include <fcntl.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <stdbool.h>

/*handles strings*/
char *customstrdup(char *str);
char *customstrstr(char *str, int chr);
int customstrlen(const char *str);
int customstrcmp(char *s1, char *s2);
int customstrncmp(const char *first, const char *second, int n);
/*handles commands*/
char *findpath(void);
char **tokenizer(char *str);
void execute(char *c, char **cmd);
char *pathappendcmd(char *path, char *cmd);
char *findcmdpath(char **p, char *cmd);
/*builtin functions*/
void printenv(void);
void exitprogram(char **cmd, char *b);
int checkifbuiltin(char **cmd, char *b);
void displayprompt(void);
void handleCtrlC(int n);
/*auxilliary functions*/
int builtinorexec(char **cmd, char *b);
void freetokens(char **m);
/*environment variables*/
extern __sighandler_t signal(int __sig, __sighandler_t __handler);
extern char **environ;

/**
 * struct builtins - Handles builtins
 * @env: First member
 * @exit: Second member
 *
 * Description: builtin commands
 */
struct builtins
{
	char *env;
	char *exit;

} builtins;

/**
 * struct info - Status info struct
 * @final_exit: First member
 * @ln_count: Second member
 *
 * Description: Used in error handling
 */
struct info
{
	int final_exit;
	int ln_count;
} info;

/**
 * struct flags - Holds flags
 * @interactive: First member
 *
 * Description: used to handle
 * boolean switches
 */
struct flags
{
	bool interactive;
} flags;

#endif /* SHELL_H */
