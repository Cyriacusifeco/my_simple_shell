#include "main.h"
#include <stdlib.h>
#include <stdio.h>
extern char **environ;

/**
 * main - check the code
 * 
 * Return: PATH.
 **/
char *cmd_search(char *path, char *cmd);
int find_str(const char *str1, const char *str2);

char *search_path(char *cmd)
{
	int i = 0, int p = 0;
	char *buffer;

	//Transversing through all environmental variables.

	for (; *(environ[i]) != '\0'; i++)
	{


		p = find_str(environ[i], "PATH=");

		if (p == 0) //i.e If PATH is found
		{
			break;
		}

	}

	printf("%s\n", environ[i]);

	path = split_str(environ[i]);

	str_token = cmd_search(char *path, char *cmd);


return (str_token);
}

int find_str(const char *str1, const char *str2)
{
	int i = 0, flag = 0;

	while (str2[i] != '\0')
	{

		if (str1[i] != str2[i])
		{
			flag = 1;
			break;
		}

		i++;
	}

return (flag);
}

char *cmd_search(char *path, char *cmd)
{
	int i = 0;
	struct stat buff;

	while (path[i] != NULL)
	{
		cmd_path = _strcat(path[i], cmd);

		if (stat(cmd_path, buff) == 0)
		{
			str_token = (path[i]);
			break;
		}

		i++;

	}

return (str_token);
}

