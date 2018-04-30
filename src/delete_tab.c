/*
** EPITECH PROJECT, 2018
** PSU_minishell1_2017
** File description:
** delete_tab.c
*/

#include <stdlib.h>

void delete_tab(char **tab)
{
	int i = 0;

	if (tab == NULL) {
		return;
	}
	while (tab[i] != NULL) {
		free(tab[i]);
		i++;
	}
	free(tab);
}
