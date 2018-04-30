/*
** EPITECH PROJECT, 2018
** PSU_minishell1_2017
** File description:
** strtowordtab.c
*/

#include "my.h"

int wordlen(char *str)
{
	int i = 0;

	while (str[i] != '\0') {
		if (is_separator(str[i]))
			return (i);
		++i;
	}
	return (i);
}

char **cpy_line(char **tab, char *str, int words)
{
	int word_len = 0;
	int j = 0;

	while (str[0] != '\0' && is_separator(str[0]))
		++str;
	while (j < words) {
		word_len = wordlen(str);
		str[word_len] = '\0';
		tab[j] = my_strdup(str);
		if (tab[j] == NULL)
			return NULL;
		++j;
		if (j < words)
			str += word_len + 1;
		while (str[0] != '\0' && is_separator(str[0]))
			++str;
	}
	tab[words] = NULL;
	return tab;
}

char **str_to_wordtab(char const *wordstr)
{
	char **tab = NULL;
	char *str = my_strdup(wordstr);
	int words = count_words(str);

	if (words == -1) {
		rb_print_err("string pointer is NULL");
		return NULL;
	}
	if (words == 0)
		return NULL;
	tab = malloc(sizeof(*tab) * (words + 1));
	if (tab == NULL)
		return (NULL);
	cpy_line(tab, str, words);
	free(str);
	return (tab);
}