#ifndef SHELL_H
#define SHELL_H
int exit_built(char **av, char **argv, char **envp);
int read_buff(int ac, char **av);
void *parse_buff(char **av);
void execute(char **av);
int _strlen(char **av);
char *_strcpy(char *command, char **av, int i, int j);
#endif
