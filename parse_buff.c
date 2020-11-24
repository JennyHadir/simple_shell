#include "shell.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 *
 *
 *
 *
 */
char **parse_buff(char *buff, int *nb)
{
int i = 0;
char *rtok = NULL;
char **tokens = NULL;
rtok = strtok(buff, " ");
if (check_builtin(rtok, tokens) != 0)
{
tokens = malloc(sizeof(char *) *1024);
if (tokens == NULL)
return (NULL);
while (rtok)
{
tokens[i] = rtok;
i++;
*(nb) = i;
rtok = strtok(NULL, " ");
}
tokens[i] = NULL;
free(rtok);
}
return (tokens);
}
