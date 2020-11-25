#include "shell.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
/**
 * read_buff - read the command line entered by the user
 *@ac:argument count
 *@av:argument value
 *Return: 1 succes, 0 otherwise
 */
int read_buff(int ac, char **av)
{
int start = NULL;
if (isatty(STDIN_FILENO))
write(1, "\n#cisfun$ ", 11);
if (getline(&av[1], &ac, stdin) != EOF)
{
start = 1;
return (start);
}
else
{
perror("Error:");
return (start);
}
}
