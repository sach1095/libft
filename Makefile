
NAME = libft.a

SRCS =  ft_isalnum ft_isalpha ft_isascii ft_isdigit ft_isprint \
		ft_tolower ft_toupper ft_bzero ft_memchr ft_memcpy \
		ft_memmove ft_memset ft_memcmp ft_calloc ft_strdup \
		ft_strlcat ft_strlcpy ft_strlen ft_strnstr ft_strrchr \
		ft_strchr ft_strncmp ft_atoi \

BONUS = 	

FLAGS = -Wall -Wextra -Werror -I

OBJS = ${SRCS:.c=.o}

BONUS_OBJS = $(BONUS:.c=.o)

all:	${NAME}

${NAME}:	${OBJS}
			ar rcs ${NAME} ${OBJS}

clean:
			${RM} ${OBJS} $(BONUS_OBJS)

fclean:	clean
			${RM} ${NAME}

bonus:		$(OBJS) $(BONUS_OBJS)
				ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

re :	 fclean ${NAME}

.PHONY: all clean fclean bonus re