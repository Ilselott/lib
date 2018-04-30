##
## EPITECH PROJECT, 2018
## bootcamp-rebirth
## File description:
## Makefile
##

NAME =	libmy.a

SRC =	array_utils/delete_tab.c \
	array_utils/create_tab.c \
	array_utils/find_in_tab.c \
	array_utils/realloc_tab.c \
	array_utils/copy_tab.c \
	array_utils/add_line.c \
	array_utils/get_val_from_tab.c \
	array_utils/find_tab_size.c \
	array_utils/display_array.c \
	array_utils/strtowordtab.c \
	array_utils/delete_line.c \
	array_utils/realloc_tab.c \
	array_utils/remove_line.c \
	count_words.c \
	my_putchar.c \
	my_putstr.c \
	str_has_char.c \
	my_putnbr.c \
	my_memset.c \
	my_strlen.c \
	rb_free.c \
	epur_str.c \
	rb_malloc.c \
	rb_print_err.c \
	rb_realloc_str.c \
	rb_strcmp.c \
	rb_strcpy.c \
	rb_str_to_int.c \
	rb_strisinformat.c \
	rb_strlowcase.c \
	rb_strncmp.c \
	rb_strupcase.c \
	rb_xerror.c \
	my_strndup.c\
	concat_dup.c \
	my_strdup.c \
	is_separator.c \
	consume_chars.c \

OBJ =	$(SRC:%c=%o)

INC =	-I ../../include

CFLAGS+=	$(INC) -W -Wall -Wextra -Wshadow -g

all:	$(NAME)

$(NAME) : $(OBJ)
	ar rc -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f lib/$(NAME)

re:	fclean all