NAME_C = client
NAME_S = server

CC = cc
CFLAGS = #-Wall -Wextra -Werror -g3 #-fsanitize=address -fsanitize=undefined

SRC_DIR = src
SRC_FILES = client.c server.c utils.c

SRC = $(addprefix $(SRC_DIR)/, $(SRC_FILES))

LIBFT_DIR = ./libft
LIBFT = $(LIBFT_DIR)/libft.a
LIBFTA = -L$(LIBFT_DIR) -lft

OBJ_DIR = OBJ
OBJ = $(addprefix $(OBJ_DIR)/, $(SRC_FILES:.c=.o))

RM = rm -rf

# Colors
RED = \033[91;1m
GREEN = \033[92;1m
CLEAR = \033[0m

.PHONY: all clean fclean re libft

all: $(NAME_C) $(NAME_S)

libft: $(LIBFT)

$(LIBFT):
	@make -C $(LIBFT_DIR)
	@echo "$(GREEN)Libft Compiled.$(CLEAR)"

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	@echo "Compiling $< to $@"
	$(CC) -c $< -o $@ $(CFLAGS) -I. -I$(LIBFT_DIR)

$(NAME_C): $(OBJ_DIR)/client.o $(OBJ_DIR)/utils.o $(LIBFT)
	$(CC) $(OBJ_DIR)/client.o $(OBJ_DIR)/utils.o $(CFLAGS) $(LIBFTA) -o $(NAME_C)
	@echo "$(GREEN)$(NAME_C) Compiled.$(CLEAR)"

$(NAME_S): $(OBJ_DIR)/server.o $(OBJ_DIR)/utils.o $(LIBFT)
	$(CC) $(OBJ_DIR)/server.o $(OBJ_DIR)/utils.o $(CFLAGS) $(LIBFTA) -o $(NAME_S)
	@echo "$(GREEN)$(NAME_S) Compiled.$(CLEAR)"

clean:
	$(RM) $(OBJ_DIR)
	@make -C $(LIBFT_DIR) clean
	@echo "$(RED)Objects cleaned.$(CLEAR)"

fclean: clean
	$(RM) $(NAME_C) $(NAME_S)
	@make -C $(LIBFT_DIR) fclean
	@echo "$(RED)$(NAME_C), $(NAME_S), and libft cleaned.$(CLEAR)"

re: fclean all
