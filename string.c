#include "holberton.h"

/**
 * _strcmpdir - compares strings to find directory
 * @s1: string one
 * @s2: string two
 *
 * Return: dependes
 */
int _strcmpdir(char *s1, char *s2)
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
 * charput - writes the character like putchar
 * @c: the character to print
 *
 * Return: 1 on success, -1 on error and errno is appropriately set
 */
int charput(char c)
{
return (write(1, &c, 1));
}

/**
 * place - similalr to puts in C
 * @str: a pointer to the integer we want to set to 402
 *
 * Return: int
 */
void place(char *str)
{
while (*str != '\0')
{
charput(*str);
str++;
}
}

/**
 * _strlen - length of the string
 * @str: the string
 *
 * Return: strength of the string
 */
int _strlen(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++)
;
return (i);
}

/**
 * str_concat - concatenates the strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: strings
 */
char *str_concat(char *s1, char *s2)
{
char *a;
int lens1, lens2, j, i, e;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

lens1 = _strlen(s1);

lens2 = _strlen(s2);

a = malloc(((lens1) +(lens2) + 1) * sizeof(char));

if (a == NULL)
return (NULL);

for (j = 0; j < lens1; j++)
{
a[j] = s1[j];
}

for (i = lens1, e = 0; e <= lens2; i++, e++)
{
a[i] = s2[e];
}
return (a);
}
