/*
** EPITECH PROJECT, 2018
** PSU_minishell1_2017
** File description:
** fill_tab.c
*/

#include "my.h"

char **copy_tab(char **res, char **tab)
{
	int i = 0;

	while (tab[i] != NULL) {
		res[i] = my_strdup(tab[i]);
		++i;
	}
	tab[i] = NULL;
	return res;
}