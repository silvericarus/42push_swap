SRCS 		= \
				ft_atoi.c\
				ft_bzero.c\
				ft_calloc.c\
				ft_isalnum.c\
				ft_isalpha.c\
				ft_isascii.c\
				ft_isdigit.c\
				ft_isprint.c\
				ft_memchr.c\
				ft_memcmp.c\
				ft_memcpy.c\
				ft_memmove.c\
				ft_memset.c\
				ft_strchr.c\
				ft_strdup.c\
				ft_strlcat.c\
				ft_strlcpy.c\
				ft_strlen.c\
				ft_strncmp.c\
				ft_strnstr.c\
				ft_strrchr.c\
				ft_tolower.c\
				ft_toupper.c\
				ft_substr.c\
				ft_strjoin.c\
				ft_strtrim.c\
				ft_itoa.c\
				ft_split.c\
				ft_putstr_fd.c\
				ft_putnbr_fd.c\
				ft_putchar_fd.c\
				ft_putendl_fd.c\
				ft_striteri.c\
				ft_strmapi.c\
				ft_arrsize.c\
				ft_atoli.c\
				ft_strtrim_left.c\
				ft_matrix_size.c\
				ft_abs.c\

SRCSBONUS	= \
				ft_lstnew_bonus.c\
				ft_lstadd_front_bonus.c\
				ft_lstsize_bonus.c\
				ft_lstlast_bonus.c\
				ft_lstadd_back_bonus.c\
				ft_lstdelone_bonus.c\
				ft_lstclear_bonus.c\
				ft_lstiter_bonus.c\
				ft_lstmap_bonus.c\
				$(SRCS)

SRCSFT_PRINTF=\
				ft_printf.c \
				utils.c \
				utils2.c \
				utils3.c \

SRCS_GNL=\
				get_next_line.c \
				get_next_line_utils.c \

OBJS 		= $(SRCS:.c=.o)
OBJSBONUS	= $(SRCSBONUS:.c=.o)
OBJSFT_PRINTF= $(SRCSFT_PRINTF:.c=.o)
OBJS_GNL= $(SRCS_GNL:.c=.o)
NAME		= libft.a
CC			= gcc
CFLAGS		= -Wall -Wextra -Werror -D BUFFER_SIZE=42
RM			= rm -f

all: $(NAME) 

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS) $(OBJSFT_PRINTF) $(OBJS_GNL)
	ar -rc $(NAME) $(OBJS) $(OBJSFT_PRINTF) $(OBJS_GNL)

clean:
	$(RM) $(OBJS) $(OBJSBONUS) $(OBJSFT_PRINTF) $(OBJS_GNL)

fclean: clean
	$(RM) $(NAME)

re: fclean all

bonus: $(OBJS) $(OBJSBONUS) $(OBJSFT_PRINTF) $(OBJS_GNL)
	ar -rc $(NAME) $(OBJS) $(OBJSBONUS) $(OBJSFT_PRINTF) $(OBJS_GNL)

.PHONY: all clean fclean re bonus
