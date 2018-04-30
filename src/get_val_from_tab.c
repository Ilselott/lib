/*
** EPITECH PROJECT, 2018
** PSU_minishell1_2017
** File description:
** get_val_from_tab.c
*/

#include "my.h"

char *get_val_from_tab(char **tab, char *value)
{
	int len = my_strlen(value);

	return rm_nb_chars(find_in_tab(tab, value), len);
}