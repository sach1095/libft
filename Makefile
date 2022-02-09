NAME = libft.a

HEADER = srcs/libft.h

CC = gcc

S = srcs/

SRCS =  $(S)ft_isalnum.c $(S)ft_isalpha.c $(S)ft_isascii.c $(S)ft_isdigit.c $(S)ft_isprint.c \
		$(S)ft_tolower.c $(S)ft_toupper.c $(S)ft_bzero.c $(S)ft_memchr.c $(S)ft_memcpy.c \
		$(S)ft_memmove.c $(S)ft_memset.c $(S)ft_memcmp.c $(S)ft_calloc.c $(S)ft_strdup.c \
		$(S)ft_strlcat.c $(S)ft_strlcpy.c $(S)ft_strlen.c $(S)ft_strnstr.c $(S)ft_strrchr.c \
		$(S)ft_strchr.c $(S)ft_strncmp.c $(S)ft_atoi.c $(S)ft_substr.c $(S)ft_strjoin.c \
		$(S)ft_strtrim.c $(S)ft_split.c $(S)ft_itoa.c $(S)ft_strmapi.c $(S)ft_putchar_fd.c \
		$(S)ft_putchar_fd.c $(S)ft_putendl_fd.c $(S)ft_putnbr_fd.c $(S)ft_putstr_fd.c $(S)ft_memccpy.c

BONUS = $(S)ft_lstnew.c $(S)ft_lstadd_front.c $(S)ft_lstsize.c $(S)ft_lstlast.c $(S)ft_lstadd_back.c \
		$(S)ft_lstdelone.c $(S)ft_lstclear.c $(S)ft_lstiter.c $(S)ft_lstmap.c

CFLAGS = -Wall -Wextra -Werror

OBJS = $(SRCS:.c=.o)

BONUS_OBJS = $(BONUS:.c=.o)

all:	$(NAME)

%.o: %.c $(HEADER)
			gcc $(CFLAGS)  -c $< -o $@

$(NAME): $(OBJS) $(HEADER)
		ar rcs $(NAME) $(OBJS)

clean:
			$(RM) $(OBJS) $(BONUS_OBJS)

fclean:	clean
			$(RM) $(NAME)

bonus:		$(NAME) $(BONUS_OBJS)
				ar rcs $(NAME) $(BONUS_OBJS)

re:	 fclean $(NAME)

.PHONY: all clean fclean bonus re
