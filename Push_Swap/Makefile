NAME_P = push_swap
NAME_C = checker

S_DIR = ./srcs/
C_DIR = ./srcs/checker/
P_DIR = ./srcs/push_swap/

LIBRARY_NAME = libftprintf.a
LIBRARY_DIR = ./libft/
LIBRARY = $(addprefix $(LIBRARY_DIR), $(LIBRARY_NAME))

FLAGS = -Wall -Werror -Wextra

CHECK_FILES =	checker.c lists.c utils.c checks.c coms.c print.c split.c args.c

PUSH_FILES = 	push_swap.c lists.c checks.c utils.c sort.c coms.c print.c \
				split.c

all: $(NAME_P) $(NAME_C)

CHECK_FUNC = $(addprefix $(S_DIR), $(CHECK_FILES))

$(NAME_C): $(LIBRARY_NAME) 
	@gcc $(FLAGS) -o $(NAME_C) $(CHECK_FUNC) $(LIBRARY) 
	@echo "\033[32mBinary \033[1;32m$(NAME_C)\033[1;0m\033[32m Created.\033[0m"

PUSH_FUNC = $(addprefix $(S_DIR), $(PUSH_FILES))

$(NAME_P): $(LIBRARY_NAME) 
	@gcc $(FLAGS) -o $(NAME_P) $(PUSH_FUNC) $(LIBRARY) 
	@echo "\033[32mBinary \033[1;32m$(NAME_P)\033[1;0m\033[32m Created.\033[0m"

$(LIBRARY_NAME):
	@make -C $(LIBRARY_DIR)
	@echo "\033[32mLibrary \033[1;32m$(LIBRARY_NAME)\033[1;0m\033[32m Created.\033[0m"

clean:
	@echo "\033[1;31mCleaning...\033[0m"
	@make clean -C $(LIBRARY_DIR)
	@echo "\033[1;31mCleaning done!\033[1;0m"

fclean: clean
	@/bin/rm -f $(NAME_P) $(NAME_C)
	@make fclean -C $(LIBRARY_DIR)
	@echo "\033[31mBin \033[1;31m$(NAME_P)\033[1;0m\033[31m Removed.\033[0m"
	@echo "\033[31mBin \033[1;31m$(NAME_C)\033[1;0m\033[31m Removed.\033[0m"

re: fclean all
