NAME	= libasm.a
SRCS	= ft_strlen.s ft_strcpy.s ft_strcmp.s \
			ft_write.s

OBJS	= $(SRCS:.s=.o)

NASM	= nasm
NASM_FL	= -f macho64
CC		= gcc
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror

%.o: 			%.s
				@$(NASM) $(NASM_FL) $<

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)
				@echo "libasm done!"

clean:
				$(RM) $(OBJS)
				@echo "libasm clean!"

fclean:			clean
				$(RM) $(NAME)
				@echo "All clean done!"

re:				fclean $(NAME)

.PHONY:			all clean fclean re
