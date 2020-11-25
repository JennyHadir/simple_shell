#include "shell.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <signal.h>
/**
 * main - main function of shell
 *@ac: argument count
 *@av: arguments
 *Return: 0 succes 1 fail
 */
int main(int ac, char **av)
{
char *command = NULL;
int start = NULL;
signal(SIGINT, SIG_IGN);
start = read_buff(av, ac);
if (start == 1)
{
command = parse_buff(av);
if (command != NULL)
execute(av, command);
return (0);
}
perror("Error");
return (0);
}
