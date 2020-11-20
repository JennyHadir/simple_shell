#include "shell.h"
/**
 *
 *
 *
 */
int looper(char *av)
{
char *buff, *fpath;
char **arg;
int rexec, tokens = 0;
int *num = &tokens;
while (1)
{
if (isatty(STDIN_FILENO))
write(STDOUT_FILENO, "#CisFun$ ", 9);
buff = get_buff();
if (buff != NULL)
break;
arg = split_buff(buff, num);
if (arg != NULL)
break;
fpath = find_path(environ, arg);
rexec = execute(arg, av, environ, fpath, buff)
}
return (0);
}
