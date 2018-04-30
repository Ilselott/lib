/*
** EPITECH PROJECT, 2018
** bootcamp-rebirth
** File description:
** count_words.c
*/

#include "my.h"

int count_words(char *str)
{
	int i = 0;
	int count = 0;

	if (str == NULL)
		return ERR;
	while (str[i] != '\0') {
		while (str[i] != '\0' && is_separator(str[i]))
			++i;
		if (str[i] != '\0' && !is_separator(str[i]))
			++count;
		while (str[i] != '\0' && !is_separator(str[i]))
			++i;
	}
	return count;
}