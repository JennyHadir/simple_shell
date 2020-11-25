#include "shell.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
/**
 * parse_buff - split the buffer
 *@av: argument value
 *Return: char
 */
char *parse_buff(char **av)
{
char *command = NULL;
int  j = 0, i = 1;
while (i < _strlen(av[i][1]))
{
if (av[i][1] == "/")
{
_strcpy(command, av, i, j);
}
i++;
}
return (command);
}
