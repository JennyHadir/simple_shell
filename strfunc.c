#include "shell.h"
/**
 * _strcpy - copy function
 * @dest: string destination
 * @src: string source
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';
return (dest);
}
/**
 * _strncmp - compare two strings with a specific number of bytes
 *@s1: string 1 to compare
 *@s2: string 2 to compare with
 *@nb: number of bytes
 *Return: 0 if equal, difference otherwise
 */
int _strncmp(char *s1, char *s2, int nb)
{
int i = 0;
while (i < nb)
{
if (s1[i] != s2[i])
return (s1[i] - s2[i]);
i++;
}
return (0);
}
/**
 * _strcmp - compare two strings function
 *@s1: string 1 to compare
 *@s2: string 2 to compare with
 *Return: 0 if equal , difference otherwise.
 */
int _strcmp(char *s1, char *s2)
{
int i = 0;
while (s1[i] != '\0' && s2[i] != '\0')
{
if (s1[i] != s2[i])
return (s1[i] - s2[i]);
i++;
}
return (0);
}
/**
 * _strlen - count the length of a string
 *@s: string
 *Return: length
 */
int _strlen(char *s)
{
int len = 0;
while (s[len])
len++;
return (len);
}
