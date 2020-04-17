#include "header.h"

/**
 *_exec-function thatexecutes commands from stdin
 * @av: array of arguments to execute
 * @ac: number of arguments
 * Return: 0
 */
int _exec(int  ac, char *av[])
{
	int pid, status;
	unsigned int i;
	struct stat sb;
	(void) ac;

	i = 0;
	status = 0;
	pid = 0;
	if (av[0])
	{
		if (stat(av[i], &sb) == -1)
		{
			perror("stat");
				return (127);
		}
		else
		{
			pid = fork();

			if (pid == 0)
			{
				if (execve(av[0], av, NULL) == -1)
				{
					perror("./shell");
					exit(2);
				}
			}
			else
			{
				wait(&status);
			}
		}
	}
	else
	{
		exit(127);
	}
	return (0);
}
