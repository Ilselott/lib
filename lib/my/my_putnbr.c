/*
** EPITECH PROJECT, 2017
** PSU_minishell1_2017
** File description:
** my_putnbr.c
*/

#include "my.h"

void my_putnbr(int nb)
{
	if (nb < 0) {
		my_putchar('-');
		nb = -1 * nb;
	}
	if (nb <= 9) {
		my_putchar(nb + '0');
	} else if (nb == -2147483648) {
		write(1, "-2147483648", 11);
	} else {
		my_putnbr(nb/10);
		my_putnbr(nb%10);
	}
}
