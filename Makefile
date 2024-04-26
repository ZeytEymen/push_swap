SRCS			=	push_swap.c utils.c

OBJS			=	$(SRCS:.c=.o)

NAME			=	push_swap

CC				=	gcc

CFLAGS			=	-Wall -Wextra -Werror

RM				=	rm -rf

all:			$(NAME)

$(NAME):		$(OBJS)
				make -C libft -s
				$(CC) $(CFLAGS) $(OBJS) -o $(NAME) libft/libft.a

clean:			
				make clean -C libft -s
				$(RM) $(OBJS)

fclean:			clean
						$(RM) $(NAME)
						
re:				fclean all

.PHONY:			all clean fclean re