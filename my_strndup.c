/*
** EPITECH PROJECT, 2018
** PSU_my_exec_2017
** File description:
** my_strndup.c
*/

#include "my.h"

char *my_strndup(char *str, int n)
{
	char *res;
	int i = 0;

	if (str == NULL) {
		rb_print_err("strndup: string pointer is NULL");
		return NULL;
	}
	res = malloc(sizeof(*res) * (n + 1));
	while (str[i] != '\0' && i < n) {
		res[i] = str[i];
		i++;
	}
	res[i] = '\0';
	return res;
}