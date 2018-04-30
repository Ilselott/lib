/*
** EPITECH PROJECT, 2018
** bootcamp-rebirth
** File description:
** rb_free.c
*/

#include "my.h"

void rb_free(void *ptr)
{
	if (ptr == NULL) {
		rb_print_err("rb_free: cannot free NULL pointer");
		return;
	}
	free(ptr);
}