/*
** EPITECH PROJECT, 2018
** PSU_minishell1_2017
** File description:
** find_in_tab.c
*/

#include "my.h"

char *find_in_tab(char **tab, char *to_find)
{
	int index = find_tab_index(tab, to_find);

	if (index != -1)
		return tab[index];
	return NULL;
}

int find_tab_index(char **tab, char *to_find)
{
	int i = 0;
	int len = my_strlen(to_find);

	while (tab[i] != NULL) {
		if (rb_strncmp(tab[i], to_find, len) == 0) {
			return i;
		}
		i++;
	}
	return -1;
}