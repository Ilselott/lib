/*
** EPITECH PROJECT, 2018
** PSU_minishell1_2017
** File description:
** my_memset.c
*/

#include "my.h"

void *my_memset(void *ptr, char fill_with, int n)
{
	int i = 0;
	char *str = ptr;

	if (str == NULL) {
		rb_print_err(NULL_PTR);
		return NULL;
	}
	while (i <= n) {
		str[i] = fill_with;
		++i;
	}
	return str;
}