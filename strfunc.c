#include <stdio.h>
#include <stdlib.h>
#include "shell.h"
/**
 * _strlen - count length function
 *@av: argument value
 *Return: length
 */
int _strlen(char **av)
{
int len = 0;
while (av[len][1])
len++;
return (len);
}
/**
 * _strcpy - copy function
 *@av: first string
 *@command: second string
 *@i: counter of first string
 *@j: counter of second string
 *Return: second string
 */
char *_strcpy(char **av, char *command, int i, int j)
{
for (; av[i][1]; i++)
{
command[j] = av[i][1];
j++;
}
return (command);
}
