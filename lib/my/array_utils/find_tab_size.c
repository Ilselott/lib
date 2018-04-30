/*
** EPITECH PROJECT, 2018
** PSU_minishell1_2017
** File description:
** find_tab_size.c
*/

#include "my.h"

int find_tab_size(char **tab)
{
	int i = 0;

	while (tab[i] != NULL)
		++i;
	return i;
}