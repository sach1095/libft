
NAME = libft.a

CC = gcc

SRCS =  ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
		ft_tolower.c ft_toupper.c ft_bzero.c ft_memchr.c ft_memcpy.c \
		ft_memmove.c ft_memset.c ft_memcmp.c ft_calloc.c ft_strdup.c \
		ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strnstr.c ft_strrchr.c \
		ft_strchr.c ft_strncmp.c ft_atoi.c

BONUS = 	

FLAGS = -Wall -Wextra -Werror - I

OBJS = ${SRCS:.c=.o}

BONUS_OBJS = $(BONUS:.c=.o)

all:	${NAME}

${NAME}: ${OBJS}
		ar rcs ${NAME} ${OBJS}
		${RM} ${OBJS}

clean:
			${RM} ${OBJS} $(BONUS_OBJS)

fclean:	clean
			${RM} ${NAME}

bonus:		$(OBJS) $(BONUS_OBJS)
				ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

re :	 fclean ${NAME}

.PHONY: all clean fclean bonus re