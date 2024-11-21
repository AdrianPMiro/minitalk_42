NAME = libft.a

CC = gcc
CCFLAGS = -Wall -Wextra -Werror -fPIC
SRC_ft_libft = ./ft_libft/ft_atoi.c ./ft_libft/ft_bzero.c ./ft_libft/ft_calloc.c ./ft_libft/ft_isalnum.c ./ft_libft/ft_isalpha.c ./ft_libft/ft_isascii.c ./ft_libft/ft_isdigit.c ./ft_libft/ft_isprint.c ./ft_libft/ft_itoa.c ./ft_libft/ft_memchr.c ./ft_libft/ft_memcmp.c ./ft_libft/ft_memcpy.c \
	./ft_libft/ft_memmove.c ./ft_libft/ft_memset.c ./ft_libft/ft_putchar_fd.c ./ft_libft/ft_putendl_fd.c ./ft_libft/ft_putnbr_fd.c ./ft_libft/ft_putstr_fd.c ./ft_libft/ft_strchr.c ./ft_libft/ft_strdup.c ./ft_libft/ft_striteri.c ./ft_libft/ft_strjoin.c ./ft_libft/ft_strlcat.c ./ft_libft/ft_intlen.c \
	./ft_libft/ft_strlcpy.c ./ft_libft/ft_strlen.c ./ft_libft/ft_strmapi.c ./ft_libft/ft_strncmp.c ./ft_libft/ft_strnstr.c ./ft_libft/ft_strrchr.c ./ft_libft/ft_strtrim.c ./ft_libft/ft_substr.c ./ft_libft/ft_tolower.c ./ft_libft/ft_toupper.c ./ft_libft/ft_split.c \
	
SRC_ft_printf = ./printf/ft_printf.c ./printf/ft_percentage.c ./printf/ft_num_function.c ./printf/ft_str_function.c \
	./printf/ft_char_function.c ./printf/ft_percentage_function.c ./printf/ft_unsignednum_function.c ./printf/ft_hexa_function.c \

SRC_gnl = ./gnl/get_next_line_utils.c ./gnl/get_next_line.c \


OBJ_ft_libft = $(SRC_ft_libft:.c=.o)
OBJ_ft_printf = $(SRC_ft_printf:.c=.o)
OBJ_gnl = $(SRC_gnl:.c=.o)
OBJ = $(OBJ_ft_libft) $(OBJ_ft_printf) $(OBJ_gnl)
AR = ar -crs
RM = rm -f

.SILENT:

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CCFLAGS) -c $< -o $@

e: $(OBJ)
	$(CC) $(CCFLAGS) $(OBJ) main.c
	./a.out

clean:
	$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME) 
	@rm -f a.out

re: fclean all

.PHONY: all clean fclean re
