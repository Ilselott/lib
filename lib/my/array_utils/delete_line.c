/*
** EPITECH PROJECT, 2018
** PSU_minishell1_2017
** File description:
** delete_line.c
*/

#include <stdlib.h>

void delete_line(char **tab, int index)
{
	free(tab[index]);
}