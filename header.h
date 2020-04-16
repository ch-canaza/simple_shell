#ifndef HEADER_H
#define HEADER_H
#include <stddef.h>
#include <sys/stat.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <signal.h>
#include <stdarg.h>
void _split(char *buffer, char **av);
void get_line(char *buffer);
void _exec(char *av[]);
void free_function(int n, ...);
int print_e(char **arg);
int _strcmp(char *s1, char *s2);
int _strlen(char *s);
int main(int ac, char **ar, char *envp[]);
#endif

