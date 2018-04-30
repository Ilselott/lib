/*
** EPITECH PROJECT, 2018
** bootcamp-rebirth
** File description:
** rb_strcmp.c
*/

#include "my.h"

int rb_strcmp(char *str1, char *str2)
{
	int i = 0;
	int j = 0;

	if ((str1 == NULL) || (str2 == NULL))
		return rb_print_err("rb_strcmp: String pointer is NULL");
	while (str1[i] != '\0' && str2[j] != '\0') {
		if ( str1[i] != str2[j] )
			return (str1[i] - str2[j]);
		i++;
		j++;
	}
	return (str1[i] - str2[j]);
}