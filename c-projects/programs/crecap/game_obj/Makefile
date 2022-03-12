MODULES = ../../../modules
INCLUDE = ../../../include

CC = gcc

#CFLAGS = -Wall -Werror -g -I$(INCLUDE)
CFLAGS = -g -I$(INCLUDE)

OBJS = game_obj_main.o $(MODULES)/game_obj.o

EXEC = game_obj_main


$(EXEC): $(OBJS)
	$(CC) $(OBJS) -o $(EXEC)

run: $(EXEC)
	./$(EXEC)

clean:
	rm -f $(OBJS) $(EXEC)