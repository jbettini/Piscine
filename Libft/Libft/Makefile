NAME = libft.a

BONUS = libft_bonus.a

SRCS	=	ft_memset.c\
		ft_bzero.c\
		ft_memcpy.c\
		ft_memccpy.c\
		ft_memmove.c\
		ft_memchr.c\
		ft_memcmp.c\
		ft_strlen.c\
		ft_strdup.c\
		ft_strcpy.c\
		ft_strncpy.c\
		ft_strcat.c\
		ft_strncat.c\
		ft_strlcat.c\
		ft_strchr.c\
		ft_strrchr.c\
		ft_strstr.c\
		ft_strnstr.c\
		ft_strcmp.c\
		ft_atoi.c\
		ft_isalpha.c\
		ft_isdigit.c\
		ft_isalnum.c\
		ft_isascii.c\
		ft_isprint.c\
		ft_toupper.c\
		ft_tolower.c\
		ft_memalloc.c\
		ft_memdel.c\
		ft_strnew.c\
		ft_strdel.c\
		ft_strclr.c\
		ft_striter.c\
		ft_striteri.c\
		ft_strmap.c\
		ft_strmapi.c\
		ft_strequ.c\
		ft_strnequ.c\
		ft_substr.c\
		ft_strjoin.c\
		ft_strtrim.c\
		ft_split.c\
		ft_itoa.c\
		ft_putchar.c\
		ft_putstr.c\
		ft_putendl.c\
		ft_putnbr.c\
		ft_calloc.c\
		ft_strncmp.c\
		ft_strlcpy.c\
		
SRCSB	=	ft_lstnew.c\
		ft_lstsize.c\
		ft_lstadd_front.c\
		ft_lstadd_back.c\
		ft_lstlast.c\
		ft_lstdelone.c\
		ft_lstclear.c\
		ft_lstiter.c\
		ft_lstmap.c\
		

CC = gcc
RM = rm -f
AR = ar rcs

OBJS = ${SRCS:.c=.o}

OBJSB = ${SRCSB:.c=.o}

CFLAGS = -Wall -Wextra -Werror

%.o: %.c
		${CC} -o $@ -c $? ${CFALGS}

${NAME}:	${OBJS}	
			${AR} ${NAME} ${OBJS}

${BONUS}:	${OBJS} ${OBJSB}
			${AR} ${BONUS} ${OBJS} ${OBJSB}

all:	${NAME} 

bonus:	${BONUS} 

clean:
	${RM} ${OBJS} ${OBJSB}

fclean:	clean
		${RM} ${NAME} ${BONUS}

re:	fclean all


.PHONY: all clean fclean re
	
