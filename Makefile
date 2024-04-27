SRCS			=	push_swap.c actions.c flag.c \
					radix_sort.c sort_utils.c \
					special_sort.c utils.c \
					utils2.c

OBJS			=	$(SRCS:.c=.o)

NAME			=	push_swap

CC				=	gcc

CFLAGS			=	-Wall -Wextra -Werror

RM				=	rm -rf

all:			$(NAME)

$(NAME):		$(OBJS)
				make -C libft -s
				$(CC) $(CFLAGS) $(OBJS) -o $(NAME) libft/libft.a
				$(RM) push_swap.a

clean:			
				make clean -C libft -s
				$(RM) $(OBJS)

fclean:			clean
				make fclean -C libft -s
				$(RM) $(NAME)
						
re:				fclean all

.PHONY:			all clean fclean re