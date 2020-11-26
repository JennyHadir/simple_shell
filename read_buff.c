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
size_t s = 0;
char *buff = NULL;
int start;
if (isatty(STDIN_FILENO))
write(1, "\n#cisfun$ ", 11);
if (getline(&buff, &s, stdin) != EOF)
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
