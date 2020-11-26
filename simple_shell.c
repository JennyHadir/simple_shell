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
int start;
signal(SIGINT, SIG_IGN);
do {
start = read_buff(ac, av);
if (start == 1)
{
parse_buff(av);
execute(av);
return (0);
}
perror("Error");
} while (1);
return (1);
}
