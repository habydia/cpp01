CC = c++
CFLAGS = -Wall -Wextra -Werror -Iinclude -std=c++98

SRC = src/*.cpp
	
OBJ_DIR = obj
OBJ = $(SRC:%.cpp=$(OBJ_DIR)/%.o)
NAME = Braiiinzz

all: $(NAME)

$(NAME): $(OBJ_DIR) $(OBJ) 
	$(CC) $(OBJ) $(CFLAGS) -o $(NAME)

$(OBJ_DIR) :
	@mkdir -p $(OBJ_DIR)

force :
%.o: %.cpp Makefile
	$(CC) $(CFLAGS) -O3 -c $< -o $@

$(OBJ_DIR)/%.o: %.cpp Makefile | $(OBJ_DIR)
	mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -O3 -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
