#include "shell.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 *
 *
 *
 *
 */
char *parse_path(char *pth, char **arg)
{
char *dir 
}

/**
 *
 *
 *
 *
 */
char *find_path(char **environ, char **arg)
{
int rlen, i = 0;
char *pth, *rpath;
while (environ[i])
{
if (_strcmp("PATH=", environ[i]) == 0 && environ[i][4])
{
rlen = _strlen(environ[i]);
pth = malloc(sizeof(char) * n - 4);
if (pth == NULL)
return (NULL);
pth = _strcpy(pth, )
}
i++;
}
rpath = parse_path(pth, arg);
free(pth);
return (rpath);
}
