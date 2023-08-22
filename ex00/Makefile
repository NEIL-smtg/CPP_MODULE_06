NAME			=	convert
SRCS_DIR		=	srcs/
OBJS_DIR		=	objs/
FILES			=	main ScalarConverter
SRCS			=	$(addprefix $(SRCS_DIR), $(addsuffix .cpp, $(FILES)))
OBJS			=	$(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES)))
GCC				=	c++
CFLAGS			=	-Wall -Werror -Wextra -pedantic -std=c++98
RM				=	rm -rf
FSAN			=	-fsanitize=address -g3

all:
	mkdir -p $(OBJS_DIR)
	make $(NAME)

$(SRCS_DIR)%.cpp:$(OBJS_DIR)%.o
	$(GCC) $(CFLAGS) $< -o $@

$(NAME):$(OBJS)
	$(GCC) $(CFLAGS) $(FSAN) -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS_DIR)

fclean: clean
	$(RM) $(NAME)

re:fclean all
