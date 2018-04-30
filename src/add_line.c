/*
** EPITECH PROJECT, 2018
** PSU_minishell1_2017
** File description:
** add_line.c
*/

#include "my.h"

char **add_line(char **tab, char *to_add)
{
	char **newtab = create_tab(find_tab_size(tab) + 2);
	int i = find_tab_size(tab);

	if (newtab == NULL) {
		rb_print_err("add_line: newtab: malloc failed");
		return NULL;
	}
	newtab = copy_tab(newtab, tab);
	if (newtab == NULL) {
		rb_print_err("add_line: newtab: copy failed");
		return NULL;
	}
	newtab[i] = my_strdup(to_add);
	newtab[i + 1] = NULL;
	return newtab;
}