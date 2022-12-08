

NAME = libftprintf.a
SRC =	ft_printf.c ft_looking_for_type.c ft_s.c ft_putchar.c ft_putnbr_base.c ft_putnbr.c ft_putstring.c ft_strlen.c ft_p.c
CFLAGS = -Wall -Wextra -Werror
OBJS = $(SRC:.c=.o)
R        := $(shell tput -Txterm setaf 1)
G        := $(shell tput -Txterm setaf 2)
Y       := $(shell tput -Txterm setaf 3)

all: $(NAME)
	@echo $(G) "ALL functions are done!"

$(NAME): $(OBJS)
	@ar rcs $@ $(OBJS)

%.o: %.c ft_printf.h
	@echo $(Y) Compiling: $< ... Done!
	@cc $(CFLAGS) -c $< \

clean:
	@echo $(R) Cleaned
	@rm -f $(OBJS)

fclean: clean
	@echo $(R) Fully cleaned
	@rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re bonus all
