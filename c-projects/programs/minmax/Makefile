MODULES = ../../modules
INCLUDE = ../../include

CC = gcc

#CFLAGS = -Wall -Werror -g -I$(INCLUDE)
CFLAGS = -g -I$(INCLUDE)

OBJS = minmax.o $(MODULES)/stats.o

EXEC = minmax


minmax: $(OBJS)
	$(CC) $(OBJS) -o $(EXEC)

run: $(EXEC)
	./$(EXEC) 1 2 3

clean:
	rm -f $(OBJS) $(EXEC)

##########################################
#minmax: minmax.o stats.o
#	gcc minmax.o stats.o -o minmax

#minmax.o: minmax.c
#	gcc -c minmax.c -I../../include -o minmax.o

#stats.o: ../../modules/stats.c
#	gcc -c ../../modules/stats.c -I../../include -o stats.o
##########################################