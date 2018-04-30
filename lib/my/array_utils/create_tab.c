/*
** EPITECH PROJECT, 2018
** PSU_minishell1_2017
** File description:
** create_tab.c
*/

#include "my.h"

char **create_tab(int tab_size)
{
	char **tab = NULL;

	tab = malloc(sizeof(*tab) * tab_size + 1);
	if (tab == NULL)
		rb_xerror("create_tab: Malloc failed");
	return tab;
}