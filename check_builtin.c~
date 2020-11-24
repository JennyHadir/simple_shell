#include "shell.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
/**
 *
 *
 *
 *
 */
int check_builtin(char *tk, char **tokens)
{
int rcmp, i = 0;
builtin op_func[] = {
{"env", env_builtin},
{"exit", exit_builtin},
{NULL, NULL}
};
char **environ;
for (; op_func[i].rel != NULL; i++)
{
if (_strcmp(tk, op_func[i].rel) == 0 && (_strlen(tk) == _strlen(op_func[i].rel)))
{
op_func[i].function(tk, tokens);
return (0);
}
}
return (1);
}
/**
 *
 *
 */
int env_builtin(char **environ)
{
int i = 0;
for (; environ[i]; i++)
{
puts(environ[i]);
}
return(0);
}
/**
 *
 *
 *
 *
 */
int exit_builtin(char *tk, char **tokens)
{
int rlen;
int rncmp = 0;
if (tk == NULL)
return (0);
rlen = _strlen(tk);
if (rlen == 4)
if (tk)
rncmp = _strncmp("exit", tk, 4);
if (rncmp == 0)
{
free(tk);
free(tokens);
exit(0);
}
return (0);
}
