NAME_C = client
NAME_S = server
NAME_C_BONUS = client_bonus
NAME_S_BONUS = server_bonus

CC = cc
CFLAGS = -Wall -Wextra -Werror -g3 #-fsanitize=address -fsanitize=undefined

SRC_DIR = src
SRC_DIR_BONUS = src_bonus
SRC_FILES = client.c server.c utils.c
SRC_FILES_BONUS = client_bonus.c server_bonus.c utils_bonus.c

SRC = $(addprefix $(SRC_DIR)/, $(SRC_FILES))
SRC_BONUS = $(addprefix $(SRC_DIR_BONUS)/, $(SRC_FILES_BONUS))

LIBFT_DIR = ./libft
LIBFT = $(LIBFT_DIR)/libft.a
LIBFTA = -L$(LIBFT_DIR) -lft

OBJ_DIR = OBJ
OBJ = $(addprefix $(OBJ_DIR)/, $(SRC_FILES:.c=.o))
OBJ_BONUS = $(addprefix $(OBJ_DIR)/, $(SRC_FILES_BONUS:.c=.o))

RM = rm -rf

# Colors
RED = \033[91;1m
GREEN = \033[92;1m
CLEAR = \033[0m

.PHONY: all clean fclean re libft bonus

all: $(NAME_C) $(NAME_S)

bonus: $(NAME_C_BONUS) $(NAME_S_BONUS)

libft: $(LIBFT)

$(LIBFT):
	@make -C $(LIBFT_DIR)
	@echo "$(GREEN)Libft Compiled.$(CLEAR)"

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	@echo "Compiling $< to $@"
	$(CC) -c $< -o $@ $(CFLAGS) -I. -I$(LIBFT_DIR)

$(OBJ_DIR)/%.o: $(SRC_DIR_BONUS)/%.c | $(OBJ_DIR)
	@echo "Compiling $< to $@"
	$(CC) -c $< -o $@ $(CFLAGS) -I. -I$(LIBFT_DIR)

$(NAME_C): $(OBJ_DIR)/client.o $(OBJ_DIR)/utils.o $(LIBFT)
	$(CC) $(OBJ_DIR)/client.o $(OBJ_DIR)/utils.o $(CFLAGS) $(LIBFTA) -o $(NAME_C)
	@echo "$(GREEN)$(NAME_C) Compiled.$(CLEAR)"

$(NAME_S): $(OBJ_DIR)/server.o $(OBJ_DIR)/utils.o $(LIBFT)
	$(CC) $(OBJ_DIR)/server.o $(OBJ_DIR)/utils.o $(CFLAGS) $(LIBFTA) -o $(NAME_S)
	@echo "$(GREEN)$(NAME_S) Compiled.$(CLEAR)"

$(NAME_C_BONUS): $(OBJ_DIR)/client_bonus.o $(OBJ_DIR)/utils_bonus.o $(LIBFT)
	$(CC) $(OBJ_DIR)/client_bonus.o $(OBJ_DIR)/utils_bonus.o $(CFLAGS) $(LIBFTA) -o $(NAME_C_BONUS)
	@echo "$(GREEN)$(NAME_C_BONUS) Compiled.$(CLEAR)"

$(NAME_S_BONUS): $(OBJ_DIR)/server_bonus.o $(OBJ_DIR)/utils_bonus.o $(LIBFT)
	$(CC) $(OBJ_DIR)/server_bonus.o $(OBJ_DIR)/utils_bonus.o $(CFLAGS) $(LIBFTA) -o $(NAME_S_BONUS)
	@echo "$(GREEN)$(NAME_S_BONUS) Compiled.$(CLEAR)"

clean:
	$(RM) $(OBJ_DIR)
	@make -C $(LIBFT_DIR) clean
	@echo "$(RED)Objects cleaned.$(CLEAR)"

fclean: clean
	$(RM) $(NAME_C) $(NAME_S) $(NAME_C_BONUS) $(NAME_S_BONUS)
	@make -C $(LIBFT_DIR) fclean
	@echo "$(RED)$(NAME_C), $(NAME_S), $(NAME_C_BONUS), $(NAME_S_BONUS), and libft cleaned.$(CLEAR)"

re: fclean all
