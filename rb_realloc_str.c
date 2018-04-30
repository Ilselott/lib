/*
** EPITECH PROJECT, 2018
** bootcamp-rebirth
** File description:
** rb_realloc_str.c
*/

#include "my.h"

char *rb_realloc_str(char *str, int size)
{
	char *res;

	if (str == NULL)
		rb_malloc(size);
	if (size <= my_strlen(str)) {
		rb_print_err("rb_realloc_str: s value is too small");
		return NULL;
	}
	res = rb_malloc((my_strlen(str) + size));
	rb_strcpy(res, str);
	return res;
}