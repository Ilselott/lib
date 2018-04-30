/*
** EPITECH PROJECT, 2018
** PSU_minishell1_2017
** File description:
** remove_line.c
*/

#include "my.h"

char **rm_tab_line(char **tab, int index)
{
	free(tab[index]);
	while (tab[index + 1] != NULL) {
		tab[index] = tab[index + 1];
		++index;
	}
	tab[index] = NULL;
	return tab;
}