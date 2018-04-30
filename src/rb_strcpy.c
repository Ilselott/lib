/*
** EPITECH PROJECT, 2018
** bootcamp-rebirth
** File description:
** rb_strcpy.c
*/

#include "my.h"

char *rb_strcpy(char *dest, char *src)
{
	int i = 0;

	if (src == NULL || dest == NULL) {
		rb_print_err(NULL_PTR);
		return NULL;
	}
	while (src[i] != '\0' && dest[i] != '\0') {
		dest[i] = src[i];
		i++;
	}
	return dest;
}

char *rb_strcpy_from_index(char *dest, char *src, int n)
{
	int i = 0;

	if (src == NULL || dest == NULL) {
		rb_print_err(NULL_PTR);
		return NULL;
	}
	while (src[n] != '\0' && dest[i] != '\0') {
		dest[n] = src[i];
		i++;
		n++;
	}
	return dest;
}