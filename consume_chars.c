/*
** EPITECH PROJECT, 2018
** PSU_minishell1_2017
** File description:
** consume_nb_chars.c
*/

#include "my.h"

char *rm_nb_chars(char *str, int nb_chars)
{
	int i = 0;

	if (nb_chars >= my_strlen(str))
		return NULL;
	while (i < nb_chars) {
		++str;
		++i;
	}
	return str;
}