/*
** EPITECH PROJECT, 2018
** PSU_minishell1_2017
** File description:
** epur_str.c
*/

#include "my.h"

char *rm_begin_end_spaces(char *str)
{
	int i = 0;

	if (str == NULL)
		return NULL;
	while (is_separator(str[i]) && str[i] != '\0')
		++str;
	while (is_separator(str[my_strlen(str) - 1])) {
		str[my_strlen(str) - 1] = '\0';
	}
	return str;
}

char *rm_middle_spaces(char *str)
{
	int i = 0;
	int j = 0;

	if (str == NULL)
		return NULL;
	while (str[i] != '\0') {
		while (str[i] != '\0' && !is_separator(str[i])) {
			str[j] = str[i];
			++i;
			++j;
		}
		str[j] = ' ';
		j++;
		while (is_separator(str[i]) && str[i] != '\0') {
			i++;
		}
	}
	str[j - 1] = '\0';
	return str;
}

char *epur_str(char *str)
{
	str = rm_begin_end_spaces(str);
	str = rm_middle_spaces(str);
	return str;
}