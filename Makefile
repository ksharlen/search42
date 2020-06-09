NAME						:=	search

DIR_SRC	:=	src/

SRC := main.c

SRCS						:=	$(SRC)

OBJS						:=	$(SRCS:.c=.o)

DIR_SRC						:=	./src/

DIRS_SRC					:=	$(DIR_SRC)\

DIRS_INCLUDE				:=	include/


LIBFT						:=	libft.a
DIR_LIBFT					:=	./lib/libft/
DIR_LIBFT_INCLUDE			:=	$(DIR_LIBFT)include/


# CFLAGS						:=	-g -Wall -Wextra -Werror
DIR_OBJ						:=	./obj/
OBJS_WITH_PATH				:=	$(addprefix $(DIR_OBJ), $(OBJS))
PATH_HEADERS				:=	$(addprefix -I , $(DIRS_INCLUDE) $(DIR_LIBFT_INCLUDE))
PATH_LIBFT					:=	$(addprefix $(DIR_LIBFT), $(LIBFT))


REMOVE						:=	rm -rf
MAKE_LIBFT					:=	make -C $(DIR_LIBFT)
MAKE_CLEAN_LIBFT			:=	make -C $(DIR_LIBFT) clean
MAKE_FCLEAN_LIBFT			:=	make -C $(DIR_LIBFT) fclean
CC							:=	gcc

vpath	%.c	$(DIRS_SRC)
vpath	%.o	$(DIR_OBJ)
vpath	%.h	$(DIRS_INCLUDE)

all: $(LIBFT) $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS_WITH_PATH) $(PATH_LIBFT) -o $@ -ltermcap

$(OBJS):%.o:%.c $(HEADERS) | $(DIR_OBJ)
	$(CC) $(CFLAGS) -c $< -o $(DIR_OBJ)$@ $(PATH_HEADERS)

$(LIBFT):
	$(MAKE_LIBFT)

$(DIR_OBJ):
	mkdir -p $@

clean:
	$(REMOVE) $(OBJS_WITH_PATH)
	$(REMOVE) $(DIR_OBJ)
	$(MAKE_CLEAN_LIBFT)

fclean: clean
	$(REMOVE) $(NAME)
	$(MAKE_FCLEAN_LIBFT)

re: fclean all

echo:
	echo $(DIRS_EXEC)

.SILENT: all $(NAME) $(OBJS) $(LIBFT) $(DIR_OBJ) clean fclean re