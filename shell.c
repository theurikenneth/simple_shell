#include "holberton.h"

/**
 * main - function with the infinite loop
 * @ac: No use
 * @av: No use
 *
 * Return: Loop
 */
int main(int ac, char **av)
{
(void)av;
(void)ac;

signal(SIGINT, controlC);
prompt();
return (0);
}
