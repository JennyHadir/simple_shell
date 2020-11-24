#include "shell.h"
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
/**
 *
 *
 *
 *
 */
int execute(char *arg[], char *av, char **env, char *pth, char *buff)
{
pid_t pid;
int stat;
pid = fork();
if (pid < 0)
perror(av);
if (pid == 0)
{
if (execve(arg[0], arg, env) == -1)
{
if (execve(pth, arg, env) == -1)
{
perror(av);
exit(0);
}
}
else
exit(errno);
}
else
wait(&stat);
free(arg);
free(buff);
free(pth);  
return (pid);
}