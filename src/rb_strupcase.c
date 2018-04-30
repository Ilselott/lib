/*
** EPITECH PROJECT, 2018
** bootcamp-rebirth
** File description:
** rb_strupcase.c
*/

#include "my.h"

char *rb_strupcase(char *str)
{
	int i = 0;

	if (str == NULL)
		rb_xerror("rb_strupcase : String pointer is NULL");
	while (str[i] != '\0') {
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return str;
}