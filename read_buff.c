#include "shell.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *
 *
 *
 */
char *read_buff(void)
{
char *buff = NULL;
size_t size = 0;
ssize_t rget;
rget = getline(&buff, &size, stdin);
if (rget == EOF)
{
free(buff);
exit(0);
}
if (rget == 1)
{
free(buff);
return (NULL);
}
return (buff);
}
