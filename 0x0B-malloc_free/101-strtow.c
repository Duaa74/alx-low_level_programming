#include "main.h"
#include <stdlib.h>
#include<stdio.h>
#include<stddef.h>

/**
 * strtow - splits a string into words
 * @str: string to split
 * Return: pointer to the split strings double pointer
 */
char **strtow(char *str)
{
char **split;
int i, j, k, row;
row = 0;

if (str == NULL || *str == '\0')
{return (NULL); }
i = 0;
while (*(str + i) != '\0')
	{
	if (*(str + i) != ' ' && (*(str + (i - 1)) == ' ' || i == 0))
		{row++; }
	i++;
	}
split = (char **)malloc(sizeof(char) * (row + 1));
if (split == NULL)
	{
	free(split);
	return (NULL);
	}
i = 0;
row = 0;
while (*(str + i) != '\0')
	{
	if (*(str + i) != ' ' && (i == 0 || *(str + (i - 1)) == ' '))
		{
		j = 0;
		while (*(str + i + j) != ' ')
			{
			if (*(str + i + j) == '\0')
			{break; }
			j++;
			}
		split[row] = malloc(sizeof(char) * (j + 1));
		if (split[row] == NULL)
			{
			free(split[row]);
			return (NULL);
			}
		for (k = 0; k <= j; ++k)
			{
			if (k == j)
				split[row][k] = '\0';
			else
				split[row][k] = *(str + i + k);
			}
		++row;
		}
	++i;
	}
split[row] = NULL;
return (split);
}
