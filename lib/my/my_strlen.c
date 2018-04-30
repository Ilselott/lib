/*
** EPITECH PROJECT, 2018
** bootcamp-rebirth
** File description:
** rb_strlen.c
*/

#include "my.h"

int my_strlen(char const *str)
{
	int i = 0;

	if (str == NULL)
		return (rb_print_err("rb_strlen : String pointer is NULL"));
	while (str[i] != '\0')
		i++;
	return i;
}