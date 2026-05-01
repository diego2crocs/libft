NAME		= libft.a

CC			= cc
CFLAGS		= -Wall -Wextra -Werror -I$(INC_DIR)
AR			= ar rcs
RM			= rm -f

SRC_DIR		= src
OBJ_DIR		= obj
INC_DIR		= includes

SRCS		= $(wildcard $(SRC_DIR)/*.c) $(wildcard $(SRC_DIR)/*/*.c)

OBJS		= $(SRCS:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

GREEN		= \033[0;32m
BLUE		= \033[0;34m
YELLOW		= \033[0;33m
RESET		= \033[0m

all: $(NAME)

$(NAME): $(OBJS)
	@$(AR) $(NAME) $(OBJS)
	@echo "$(GREEN)✓ $(NAME) créé avec succès$(RESET)"

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "$(BLUE)→ $(notdir $<)$(RESET)"

clean:
	@$(RM) -r $(OBJ_DIR)
	@echo "$(YELLOW)✗ Objets supprimés$(RESET)"

fclean: clean
	@$(RM) $(NAME)
	@echo "$(YELLOW)✗ $(NAME) supprimé$(RESET)"

re: fclean all

.PHONY: all clean fclean re
