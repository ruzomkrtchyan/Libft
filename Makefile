NAME 		= libft.a
SRC 		= $(shell find . -name '*.c' ! -name 'ft_lst*.c')
OBJ			= $(SRC:.c=.o)
BONUS		= $(shell find . -name 'ft_lst*.c')
BONUS_OBJ	= $(BONUS:.c=.o)
FLAGS 		= -Wall -Wextra -Werror
RM 			= rm -f
CC 			= cc
AR 			= ar rcs

%.o : %.c
	$(CC) $(FLAGS) -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJ)
	$(AR) $(NAME) $(OBJ)

clean : 
	$(RM) $(OBJ) $(BONUS_OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all

bonus:	$(OBJ) $(BONUS_OBJ)
			$(AR) $(NAME) $(OBJ) $(BONUS_OBJ)
.PHONY: all clean fclean re bonus