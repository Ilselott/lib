/*
** EPITECH PROJECT, 2018
** PSU_minishell1_2017
** File description:
** str_has_char.c
*/

#include "my.h"

bool is_char_in_str(char c, char *list)
{
	int i;

	while (list[i] != '\0') {
		if (c == list[i])
			return true;
		++i;
	}
	return false;
}

bool str_has_char(char *str, char *list_of_chars)
{
	int i = 0;

	while (str[i] != '\0') {
		if (is_char_in_str(str[i], list_of_chars))
			return true;
		++i;
	}
	return false;
}