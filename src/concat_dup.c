/*
** EPITECH PROJECT, 2018
** PSU_minishell1_2017
** File description:
** my_strcat.c
*/

#include "my.h"

char *concat_dup(char *dest, char *src)
{
	int i = 0;
	int j = 0;
	char *s = NULL;

	s = malloc(my_strlen(dest) + (my_strlen(src)) + 1);
	while (dest[i] != '\0') {
		s[j] = dest[i];
		i++;
		j++;
	}
	i = 0;
	while (src[i] != '\0') {
		s[j] = src[i];
		i++;
		j++;
	}
	s[j] = '\0';
	return s;
}