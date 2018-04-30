##
## EPITECH PROJECT, 2018
## bootcamp-rebirth
## File description:
## Makefile
##

NAME =	libmy.a

SRC =	src/delete_tab.c \
	src/create_tab.c \
	src/find_in_tab.c \
	src/realloc_tab.c \
	src/copy_tab.c \
	src/add_line.c \
	src/get_val_from_tab.c \
	src/find_tab_size.c \
	src/display_array.c \
	src/strtowordtab.c \
	src/delete_line.c \
	src/realloc_tab.c \
	src/remove_line.c \
	src/count_words.c \
	src/my_putchar.c \
	src/my_putstr.c \
	src/str_has_char.c \
	src/my_putnbr.c \
	src/my_memset.c \
	src/my_strlen.c \
	src/rb_free.c \
	src/epur_str.c \
	src/rb_malloc.c \
	src/rb_print_err.c \
	src/rb_realloc_str.c \
	src/rb_strcmp.c \
	src/rb_strcpy.c \
	src/rb_str_to_int.c \
	src/rb_strisinformat.c \
	src/rb_strlowcase.c \
	src/rb_strncmp.c \
	src/rb_strupcase.c \
	src/rb_xerror.c \
	src/my_strndup.c\
	src/concat_dup.c \
	src/my_strdup.c \
	src/is_separator.c \
	src/consume_chars.c \

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