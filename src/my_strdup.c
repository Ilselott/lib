/*
** EPITECH PROJECT, 2018
** PSU_minishell1_2017
** File description:
** my_strdup.c
*/

#include "my.h"

char *my_strdup(char const *str)
{
	char *newstr = NULL;
	int i = 0;

	if (str == NULL) {
		rb_print_err("strdup: string pointer is NULL");
		return NULL;
	}
	newstr = malloc(my_strlen(str) + 1);
	while (str[i] != '\0') {
		newstr[i] = str[i];
		i++;
	}
	newstr[i] = '\0';
	return newstr;
}