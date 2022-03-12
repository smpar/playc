MODULES = ../../../modules
INCLUDE = ../../../include

CC = gcc

#CFLAGS = -Wall -Werror -g -I$(INCLUDE)
CFLAGS = -g -I$(INCLUDE)

OBJS = void_ptr_main.o

EXEC = void_ptr_main


$(EXEC): $(OBJS)
	$(CC) $(OBJS) -o $(EXEC)

run: $(EXEC)
	./$(EXEC)

clean:
	rm -f $(OBJS) $(EXEC)