# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcasino <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/09 00:12:50 by jcasino           #+#    #+#              #
#    Updated: 2017/03/18 00:33:18 by jcasino          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = $(LIBRA)
LIBRA = libft.a


HPATH = -I./includes 

# VARIABLES
CC = gcc -Wall -Wextra -Werror
#CFLAGS = -c -Wall -Wextra -Werror
AR = ar -cvq
RM = rm -rf
SRCDIR = srcs
OBJDIR = objs
OBJS = $(addprefix $(OBJDIR)/, $(SRCS:.c=.o))

SRCS = ft_memset.c \
				ft_bzero.c \
				ft_memcpy.c \
				ft_memccpy.c \
				ft_memmove.c \
				ft_memchr.c \
				ft_memcmp.c \
				ft_strlen.c \
				ft_strdup.c \
				ft_strcpy.c \
				ft_strncpy.c \
				ft_strcat.c \
				ft_strncat.c \
				ft_strlcat.c \
				ft_strchr.c \
				ft_strrchr.c \
				ft_strstr.c \
				ft_strnstr.c \
				ft_strcmp.c \
				ft_strncmp.c \
				ft_atoi.c \
				ft_isalpha.c \
				ft_isdigit.c \
				ft_isalnum.c \
				ft_isascii.c \
				ft_isprint.c \
				ft_toupper.c \
				ft_tolower.c \
				ft_memalloc.c \
				ft_memdel.c \
				ft_strnew.c \
				ft_strdel.c \
				ft_strclr.c \
				ft_striter.c \
				ft_striteri.c \
				ft_strmap.c \
				ft_strmapi.c \
				ft_strequ.c \
				ft_strnequ.c \
				ft_strsub.c \
				ft_strjoin.c \
				ft_strtrim.c \
				ft_strsplit.c \
				ft_itoa.c \
				ft_putchar.c \
				ft_putstr.c \
				ft_putendl.c \
				ft_putnbr.c \
				ft_putchar_fd.c \
				ft_putstr_fd.c \
				ft_putendl_fd.c \
				ft_putnbr_fd.c \
				ft_lstnew.c \
				ft_lstdelone.c \
				ft_lstdel.c \
				ft_lstadd.c \
				ft_lstiter.c \
				ft_lstmap.c \
				ft_isupper.c \
				ft_islower.c \
				ft_numwords.c \
				ft_strcspn.c \
				ft_isspace.c \
				ft_lstcount.c \
				ft_strdupn.c \
				ft_lstaddend.c \
				get_next_line.c

# COLORS
RESET=		\033[0m
DARK=		\033[1;32m
RED=		\033[31m
GREEN=		\033[32m
YELLOW=		\033[33m
BLUE=		\033[34m
MAGENTA=	\033[35m
CYAN=		\033[36m
WHITE=		\033[37m
BOLDBLACK=	\033[1m\033[30m
BOLDRED=	\033[1m\033[31m
BOLDWHITE=	\033[1m\033[37m

all: $(NAME)

#$(NAME) :
#		$(CC) $(CFLAGS) $(SRCS)
#		ar rc $(NAME) $(OBJECT)

$(NAME): $(OBJS)
	@echo "$(CYAN)Compiling and building library..."
	@echo "$(CYAN)objects created$(DARK)"
	@$(AR) $@ $^
#	@ranlib $a
	@echo "$(RESET)$(CYAN)$(LIBRA) has been made$(RESET)\n"

$(addprefix $(OBJDIR)/, %.o): $(addprefix $(SRCDIR)/, %.c)
	@mkdir -p $(OBJDIR)
	@$(CC) $(HPATH) -o $@ -c $^

#clean:
#		rm -f $(OBJECT)

clean:
	@echo "$(MAGENTA) Deleting binary objs... $(RESET)"
	@$(RM) $(OBJDIR)

fclean: clean
	@echo "$(MAGENTA) Deleting libraries"
	@$(RM) $(NAME) $(LIBRA)

re: fclean all
