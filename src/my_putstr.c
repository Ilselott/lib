/*
** EPITECH PROJECT, 2018
** my putstr
** File description:
** my_putstr.c
*/

#include "my.h"

void my_putstr(char *str)
{
	int i = 0;

	if (str == NULL) {
		rb_print_err("Putstr: String pointer is NULL");
		return;
	}
	while (str[i] != '\0') {
		my_putchar(str[i]);
		i++;
	}
}
