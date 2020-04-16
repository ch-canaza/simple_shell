#include "header.h"
/**
 * print_e - printing environment
 * @arg: arguments to look for env
 * Return: nothing
 *
 */
int print_e(char **env)
{
	int i;

	for (i = 0; arg[i] != NULL; i++)

		write (STDOUT_FILENO, env[i]), _strelen(env(i));

		write(STDOWT_FILENO, "\n", 1);

	return (0);
}
