CC = gcc
# x86_64-w64-mingw32-gcc
CFLAGS = -std=c11 -Wall -O3
HEADERS := $(patsubst %.c,%.o,$(wildcard *.c */*.c))
EXECUTABLE = ProjectEuler


.PHONY: all clean

all: $(HEADERS)
	$(CC) -o $(EXECUTABLE) $(HEADERS) $(CFLAGS)	

%.o: %.c %.h
	$(CC) -c -o $@ $< $(CFLAGS)

clean:
	rm -f *.o */*.o $(EXECUTABLE)
