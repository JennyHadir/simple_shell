#include "shell.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
/**
 *
 *
 *
 */
void handle_signal(__attribute__((unused))int n )
{
write(STDIN_FILENO, "\n#CisFun$ ", 9);
}
/**
 * main - main function of shell building
 *@ac: number of argument
 *@av: value of argument
 *Return: 0 success, otherwise fail
 */
int main(__attribute__((unused)) int ac, char **av)
{
char *buff = NULL, *fpath = NULL;
char **arg = NULL;
int tokens = 0;
int *nb = &tokens;
char **environ;
signal(SIGINT, handle_signal);
while (1)
{
if (isatty(STDIN_FILENO))
write(STDOUT_FILENO, "#CisFun$ ", 9);
buff = read_buff();
if (buff == NULL)
continue;
arg = parse_buff(buff, nb);
if (arg == NULL)
{
free(buff);
free(arg);
continue;
}
fpath = find_path(environ, arg);
execute(arg, av[0], environ, fpath, buff);
}
return (0);
}
