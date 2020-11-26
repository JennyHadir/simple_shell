#include "shell.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
/**
 * execute - execute the command
 *@av: argument value
 */
void execute(char **av)
{
char *envp[] = {"PATH = /bin", NULL};
char *argv[] = {av[1], NULL};
pid_t child_pid;
int status;
child_pid = fork();
if (child_pid == 0)
{
if (execve(argv[0], argv, envp) == -1)
{
perror("Error:");
write(1, "\n#cisfun ", 11);
}
}
else
wait(&status);
}
