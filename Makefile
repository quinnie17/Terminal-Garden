CC = gcc
CFLAGS = -Wall -g

garden: garden.o plant.o display.o
	$(CC) $(CFLAGS) -o garden garden.o plant.o display.o

garden.o: garden.c plant.h display.h
	$(CC) $(CFLAGS) -c garden.c

plant.o: plant.c plant.h display.h
	$(CC) $(CFLAGS) -c plant.c

display.o: display.c display.h plant.h
	$(CC) $(CFLAGS) -c display.c

clean:
	rm -f *.o