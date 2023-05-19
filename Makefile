NAME = cub3d

SRC = $(wildcard ./*.c)

OBJ = $(patsubst %.c, %.o, $(SRC))

FLAGS = -Wall -Werror -Wextra

# IOS
#LINKS = -lmlx -framework OpenGL -framework AppKit

#LINUX
LINKS = -lmlx -lGL -lX11 -lbsd -Lmlx_linux -L/usr/lib -lXext -lm

CC = cc

RM = rm -rf

%.o: %.c
	@$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)
	@echo Cub3d compilation: OK

$(NAME): $(OBJ)
	@$(CC) $(FLAGS) -o $(NAME) $(OBJ) $(LINKS)

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
