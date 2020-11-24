#ifndef SHELL_H
#define SHELL_H
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>
#include <signal.h>
#include <errno.h>
char *_strcpy(char *dest, char *src);
int _strncmp(char *s1, char *s2, int nb);
int _strcmp(char *s1, char *s2);
int _strlen(char *s);
void handle_signal(__attribute__((unused))int n );
char *read_buff(void);
char **parse_buff(char *buff, int *nb);
char *parse_path(char *pth, char **arg);
char *find_path(char **environ, char **arg);
int check_builtin(char *tk, char **tokens);
int env_builtin(char **environ);
int exit_builtin(char *tk, char **tokens);
int execute(char *arg[], char *av, char **env, char *pth, char *buff);
/**
 * struct op - struct of options
 *@rel: option of char
 *@function: pointer to function
 */
typedef struct builtin
{
char *rel;
int (*function)();
} builtin;
#endif
