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

NB_TOTAL   = $(words $(wildcard $(SRC_DIR)/*/*.c))
NB_IS      = $(words $(wildcard $(SRC_DIR)/is/*.c))
NB_LIST    = $(words $(wildcard $(SRC_DIR)/list/*.c))
NB_MATH    = $(words $(wildcard $(SRC_DIR)/math/*.c))
NB_MEMORY  = $(words $(wildcard $(SRC_DIR)/memory/*.c))
NB_PRINT   = $(words $(wildcard $(SRC_DIR)/print/*.c))
NB_PUT     = $(words $(wildcard $(SRC_DIR)/put/*.c))
NB_STRINGS = $(words $(wildcard $(SRC_DIR)/strings/*.c))

BOLD_GREEN	= \033[1;32m
GREEN		= \033[0;32m
BOLD_BLUE	= \033[1;34m
BLUE		= \033[0;34m
BOLD_YELLOW	= \033[1;33m
YELLOW		= \033[0;33m
BOLD_MAGENTA	= \033[1;35m
MAGENTA		= \033[0;35m
RESET		= \033[0m

all: $(NAME)

$(NAME): $(OBJS)
	@$(AR) $(NAME) $(OBJS)
	@echo "$(GREEN)✓ $(NAME) créé avec succès$(RESET)"
	@echo "$(BOLD_BLUE)  $(NB_TOTAL) fichiers"
	@echo "$(MAGENTA)  Détail :"
	@echo "$(MAGENTA)  	is/      : $(BOLD_MAGENTA)$(NB_IS) fichiers"
	@echo "$(MAGENTA)  	list/    : $(BOLD_MAGENTA)$(NB_LIST) fichiers"
	@echo "$(MAGENTA)  	math/    : $(BOLD_MAGENTA)$(NB_MATH) fichiers"
	@echo "$(MAGENTA)  	memory/  : $(BOLD_MAGENTA)$(NB_MEMORY) fichiers"
	@echo "$(MAGENTA)  	print/   : $(BOLD_MAGENTA)$(NB_PRINT) fichiers"
	@echo "$(MAGENTA)  	put/     : $(BOLD_MAGENTA)$(NB_PUT) fichiers"
	@echo "$(MAGENTA)  	strings/ : $(BOLD_MAGENTA)$(NB_STRINGS) fichiers"

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
