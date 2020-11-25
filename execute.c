#include "shell.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
/**
 * execute - execute the command
 *@av: argument value
 *@command: command typed by the  user
 */
void execute(char **av, char *command)
{
pid_t child_pid;
char * argv[] = {av[0], command, NULL}
int status;
child_pid = fork();
if (child_pid == 0)
{
if (execve(argv[0], argv , NULL) == -1)
{
perror("Error:");
write(1, "\n#cisfun ", 11);
}
}
else
wait(&status);
}
