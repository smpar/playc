MODULES = ../../modules
INCLUDE = ../../include

CC = gcc

#CFLAGS = -Wall -Werror -g -I$(INCLUDE)
CFLAGS = -g -I$(INCLUDE)

OBJS = crecap.o

EXEC = crecap


crecap: $(OBJS)
	$(CC) $(OBJS) -o $(EXEC)

run: $(EXEC)
	./$(EXEC)

clean:
	rm -f $(OBJS) $(EXEC)