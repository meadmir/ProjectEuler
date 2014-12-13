CC = gcc
CFLAGS = -std=c99 -Wall
HEADERS := $(patsubst %.c,%.o,$(wildcard *.c */*.c))
EXECUTABLE = Euler


.PHONY: all clean

all: $(HEADERS)
	$(CC) -o $(EXECUTABLE) $(HEADERS) $(CFLAGS)	

%.o: %.c %.h
	$(CC) -c -o $@ $< $(CFLAGS)

clean:
	rm -f *.o */*.o Euler
