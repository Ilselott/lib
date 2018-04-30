/*
** EPITECH PROJECT, 2018
** bootcamp-rebirth
** File description:
** rb_print_err.c
*/

#include "my.h"

int rb_print_err(char *str)
{
	write(2, str, my_strlen(str));
	return ERR;
}