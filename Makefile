CC     = gcc
LIBS   = lib
CFLAGS = -g -Wall
FILES  = $(wildcard src/*.c)
OUT    = out

compile:
	$(CC) $(FILES) -o $(OUT) -I $(LIBS) $(CFLAGS)

run:
	./$(OUT)

clean:
	rm -rf $(OUT)