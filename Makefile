NAME	= libasm.a

MAIN	= main.c
SRCS	= ft_strlen.s ft_strcpy.s ft_strcmp.s \
			ft_write.s ft_read.s ft_strdup.s

OBJS	= $(SRCS:.s=.o)

NASM	= nasm
NASM_FL	= -f macho64
CC		= gcc
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror

%.o:			%.s
				@$(NASM) $(NASM_FL) $<

all:			$(NAME)

$(NAME):		$(OBJS)
				@ar rcs $(NAME) $(OBJS)
				@echo ">>>libasm done!<<<"

clean:
				@$(RM) $(OBJS)
				@echo ">>>libasm clean!<<<"

fclean:			clean
				@$(RM) $(NAME)
				@$(RM) ./a.out
				@$(RM) ./write.txt
				@echo ">>>all clean file's done!<<<"

re:				fclean $(NAME)

test:			$(NAME)
				$(CC) $(CFLAGS) $(MAIN) -L. -lasm && ./a.out

.PHONY:			all clean fclean re test
