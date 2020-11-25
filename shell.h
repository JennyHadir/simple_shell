#ifndef SHELL_H
#define SHELL_H
int read_buff(int ac, char **av);
char *parse_buff(char **av);
void execute(char **av, char *command);
int _strlen(char **av);
char *_strcpy(char **av, char *command, int i, int j);
#endif
