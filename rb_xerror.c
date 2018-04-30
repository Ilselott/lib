/*
** EPITECH PROJECT, 2018
** bootcamp-rebirth
** File description:
** rb_xerror.c
*/

#include "my.h"

void rb_xerror(char *str)
{
	rb_print_err(str);
	my_putchar('\n');
	exit(ERR);
}