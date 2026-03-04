NAME     = lib/libftprintf.a
CC       = cc
CFLAGS   = -Wall -Werror -Wextra -I include
OBJ_DIR  = obj
LIB_DIR  = lib
SRC_DIR  = src
INC_DIR  = include
RM       = rm -rf
MAIN_EXE = program

SRCS_NAMES =	ft_printf.c			\
				ft_looking_for_type.c	\
				ft_putchar.c		\
				ft_putnbr.c			\
				ft_putnbr_base.c	\
				ft_putstring.c		\
				ft_strlen.c			\
				ft_s.c				\
				ft_p.c

OBJS = $(addprefix $(OBJ_DIR)/, $(SRCS_NAMES:.c=.o))

# Colors
GREEN  := \033[1;32m
BLUE   := \033[1;34m
YELLOW := \033[1;33m
RED    := \033[1;31m
CYAN   := \033[1;36m
RESET  := \033[0m

all: $(NAME)
	@echo "$(GREEN)✓ Build complete: $(NAME)$(RESET)"

$(NAME): $(OBJS) | $(LIB_DIR)
	@echo "$(BLUE)... Creating archive $(NAME)...$(RESET)"
	@ar -cr $(NAME) $(OBJS)

run: $(NAME)
	@echo "$(CYAN)▶ Compiling main.c...$(RESET)"
	@$(CC) $(CFLAGS) main.c -L $(LIB_DIR) -lftprintf -o $(MAIN_EXE)
	@echo "$(CYAN)▶ Running $(MAIN_EXE)...$(RESET)"
	@./$(MAIN_EXE)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(INC_DIR)/ft_printf.h | $(OBJ_DIR)
	@echo "$(YELLOW)... Compiling $<...$(RESET)"
	@$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR):
	@echo "$(BLUE)... Creating $(OBJ_DIR) directory...$(RESET)"
	@mkdir -p $(OBJ_DIR)

$(LIB_DIR):
	@echo "$(BLUE)... Creating $(LIB_DIR) directory...$(RESET)"
	@mkdir -p $(LIB_DIR)

clean:
	@echo "$(RED)... Cleaning object files...$(RESET)"
	@$(RM) $(OBJ_DIR)
	@echo "$(GREEN)✓ Clean complete$(RESET)"

fclean: clean
	@echo "$(RED)... Removing $(LIB_DIR) and $(MAIN_EXE)...$(RESET)"
	@$(RM) $(LIB_DIR) $(MAIN_EXE)

re: fclean all

.PHONY: all run clean fclean re
