/*
** EPITECH PROJECT, 2018
** bootcamp-rebirth
** File description:
** rb_strisinformat.c
*/

#include "my.h"

int rb_strisinformat(char *str, char *format)
{
	int pos = 0;
	int i = 0;

	if (str == NULL || format == NULL)
		rb_xerror("rb_strisinformat : String pointer is NULL");
	if (str[0] == '\0')
		return 1;
	while (str[i] != '\0' && str[i] != format[pos]) {
		if (format[pos] == '\0')
			return 0;
		pos++;
	}
	i++;
	pos = 0;
	return 1;
}