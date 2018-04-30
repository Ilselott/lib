/*
** EPITECH PROJECT, 2018
** bootcamp-rebirth
** File description:
** rb_strlowcase.c
*/

#include "my.h"

char *rb_strlowcase(char *str)
{
	int i = 0;

	if (str == NULL)
		rb_xerror("rb_strlowcase : String pointer is NULL");
	while (str[i] != '\0') {
		if ( str[i] >= 'A' && str[i] <= 'Z' )
			str[i] += 32;
		i++;
	}
	return str;
}