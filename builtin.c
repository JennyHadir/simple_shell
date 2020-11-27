#include <stdio.h>
#include "shell.h"
#include <stdlib.h>
/**
 * exit_built - exit function
 * @av: argument
 * @argv: argument
 * @envp: created path
 * Return: 0
 */
int exit_built(char **av, char **argv, char **envp)
{
if (av[1] == "exit")
free(argv);
free(envp);
return (0);
}