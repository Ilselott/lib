/*
** EPITECH PROJECT, 2018
** PSU_minishell1_2017
** File description:
** realloc_tab.c
*/

#include "my.h"

char **realloc_tab(char **tab, int size)
{
	int tab_size = find_tab_size(tab);
	char **res = create_tab(tab_size + size + 1);

	if (res != NULL)
		res = copy_tab(res, tab);
	return res;

}