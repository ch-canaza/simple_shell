#include "header.h"

/**
 *_exec-function thatexecutes commands from stdin
 * @av: array of arguments to execute
 * @ac: number of arguments
 * Return: 0
 */
int _exec(int  ac, char *av[])
{
	(void) ac;
	int pid;
	int status = 0;
	unsigned int i = 0;
	struct stat sb;

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
