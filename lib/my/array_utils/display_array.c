/*
** EPITECH PROJECT, 2018
** PSU_minishell1_2017
** File description:
** display_array.c
*/

#include "my.h"

void display_array(char **tab)
{
	int i = 0;

	if (tab == NULL)
		rb_print_err("Input tab is NULL");
	while (tab[i] != NULL) {
		my_putstr(tab[i]);
		my_putchar('\n');
		++i;
	}
}