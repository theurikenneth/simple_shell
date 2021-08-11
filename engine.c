#include "holberton.h"

/**
 * lookforslash - checks whether 1st char is slash
 * @cmd: 1st str
 * Return: 1-yes, 0-no
 */

int lookforslash(char *cmd)
{
int cont = 0;

while (cmd[cont])
{
if (cmd[0] == '/')
{
printf("%c\n", cmd[0]);
return (1);
}
cont++;
}
return (0);
}
/**
 * compareExit - checks if 1st cmd is exit
 * @s1: 1st str
 * @s2: exit str
 * Return: 1-yes, 0-no
 */

int compareExit(char *s1, char *s2)
{
int i = 0;

for (; (*s2 != '\0' && *s1 != '\0') && *s1 == *s2; s1++)
{
if (i == 3)
break;
i++;
s2++;
}

return (*s1 - *s2);
}
/**
 * compareEnv - checks for change in env in 1st cmd
 * @s1: 1st str
 * @s2: exit str
 * Return: 1-yes, 0-no
 */
int compareEnv(char *s1, char *s2)
{
int i = 0;

for (; (*s2 != '\0' && *s1 != '\0') && *s1 == *s2; s1++)
{
if (i == 2)
break;
i++;
s2++;
}

return (*s1 - *s2);
}

/**
 * identify_string - identify keyboard i\p
 * @parameter: call prompt from a func (prompt)
 * Return: str
 */
char **identify_string(char *parameter)
{
char **buf = malloc(1024 * sizeof(char *));
char *split;
int i = 0;
char *delim = " \t\n";


split = strtok(parameter, delim);

while (split != NULL)
{
buf[i] = split;
i++;
split = strtok(NULL, delim);
}
execute_proc(buf);
return (buf);

}

/**
 * controlC - prevent shell from closing
 * @sig: keep shell open
 */
void  controlC(int sig)
{
(void) sig;
write(1, "\n$ ", 3);
}
