/*
** EPITECH PROJECT, 2018
** bootcamp-rebirth
** File description:
** rb_malloc.c
*/

#include "my.h"

void *rb_malloc(int size)
{
	void *res = NULL;

	if (size == 0) {
		rb_print_err("rb_malloc: Cannot allocate 0 byte.");
		return NULL;
	}
	res = malloc(sizeof(*res) * size + 1);
	if (res == NULL)
		rb_xerror("rb_malloc: Pointer is NULL");
	return res;
}