/*
** EPITECH PROJECT, 2018
** bootcamp-rebirth
** File description:
** rb_strncmp.c
*/

#include "my.h"

int rb_strncmp(char *to_find, char *base_str, unsigned int n)
{
	unsigned int i = 0;
	unsigned int j = 0;

	if ((to_find == NULL) || (base_str == NULL))
		rb_xerror("rb_strncmp: String pointer is NULL");
	while ((to_find[i] != '\0' || base_str[j] != '\0') && i < n && j < n) {
		if (to_find[i] != base_str[j] && (i < n && j < n))
			return (to_find[i] - base_str[j]);
		i++;
		j++;
	}
	--i;
	--j;
	return (to_find[i] - base_str[j]);
}