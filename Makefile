CC     = gcc
LIBS   = lib
CFLAGS = -g -Wall
FILES  = $(wildcard src/*.c)
OUT    = out

all:
	$(CC) $(FILES) -o $(OUT) -I $(LIBS) $(CFLAGS)
	./$(OUT)


compile:
	$(CC) $(FILES) -o $(OUT) -I $(LIBS) $(CFLAGS)

run:
	./$(OUT)

clean:
	rm -rf $(OUT)