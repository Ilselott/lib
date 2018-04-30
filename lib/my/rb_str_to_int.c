/*
** EPITECH PROJECT, 2018
** bootcamp-rebirth
** File description:
** rb_str_to_int.c
*/

#include "my.h"

int rb_str_to_int(char *str)
{
	int nb = 0;
	int i = 0;
	int neg = 0;

	if (str == NULL)
		return rb_print_err("rb_str_to_int: String pointer is NULL");
	while (str[i] != '\0') {
		if (str[i] == '-')
			neg++;
		if (str[i] >= '0' && str[i] <= '9') {
			nb = nb * 10;
			nb += str[i] - '0';
		}
		i++;
	}
	if (neg % 2 == 1)
		nb = - nb;
	i = 0;
	return nb;
}