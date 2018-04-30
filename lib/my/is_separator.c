/*
** EPITECH PROJECT, 2018
** PSU_minishell1_2017
** File description:
** is_separator.c
*/

#include "my.h"

bool is_separator(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return true;
	return false;
}
